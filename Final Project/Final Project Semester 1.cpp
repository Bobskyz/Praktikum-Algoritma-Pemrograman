// Developed by : Dafin Surya

#include <stdio.h> // Library default pemrograman c
#include <stdbool.h> // Library untuk pengoperasian tipe data boolean
#include <conio.h> // Library untuk penggunaan fungsi yang dapat mengontrol layar konsol
#include <time.h> // Library untuk pengoperasian waktu pada program
#include <windows.h> // Library untuk mengakses fitur yang disediakan pada windows OS

// Deklarasi konstanta
#define lebar 20
#define tinggi 15
#define JumlahRintangan 5

COORD kordinat = {X: 0, Y: 0}; // Menginisialisasi koordinat X dan Y dengan nilai 0

// Struct untuk pesawat
struct PESAWAT {
    int x, y;
};

// Struct untuk rintangan
struct RINTANGAN {
    int x, y;
    bool aktif;
};

// Fungsi untuk memindahkan kursor program
void gotoxy(int x, int y) {
	kordinat.X = x;
	kordinat.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), kordinat);
}

// Fungsi untuk menampilkan judul pada menu awal
void judul() {
	printf ("=========\n");
	printf ("The Plane\n");
	printf ("=========\n\n");
	
	gotoxy(0, 0);
	printf ("\t\t\tDikembangkan oleh : Dafin Surya\n\n");
}

// Fungsi untuk menampilkan menu utama
void MenuUtama() {
    	char pilihan;
    	system("cls");
    
    	judul();
    
	while(1) {
        	gotoxy(0, 4);
        	printf ("Tekan S untuk bermain\n");
        	printf ("Tekan E untuk keluar dari permainan\n");
        	Sleep(500);
        
        	system("cls");
        
        	judul();
        	Sleep(500);

        	if(kbhit()) { // Memeriksa apakah ada tombol yang ditekan
            		pilihan = getch();
            
            		if(pilihan == 'S' or pilihan == 's' or pilihan == 'E' or pilihan == 'e') {
            			if(pilihan == 's' or pilihan == 'S') {
            				system("cls");
            		
            				printf ("Tutorial bermain :\n");
            				printf ("Hindari semua rintangan selama yang kamu bisa\n\n");
            				printf ("Penggunaan tombol :\n");
            				printf ("<Tekan A = Bergerak ke kiri, D = Bergerak ke kanan, P = Jeda>\n\n");
            				system("pause");
            				system("cls");
				}
                		break;
            		}
        	}
    	}
	if(pilihan == 'E' or pilihan == 'e') {
		gotoxy(0, 4);
        	printf("Keluar dari permainan...\n");
        	exit(0);
    	}
}

void inisialisasi(struct PESAWAT *pesawat, struct RINTANGAN rintangan[]) {
	// Inisialisasi posisi awal pesawat
    	pesawat->x = lebar/2;
    	pesawat->y = tinggi-3;

	// Penggunaan Looping untuk menginisialisasikan posisi acak rintangan
    	for(int a = 0; a < JumlahRintangan; a++) {
        	rintangan[a].x = rand() % lebar;
        	rintangan[a].y = rand() % (tinggi / 2);
        	rintangan[a].aktif = true;
    	}
}

void tampilan(struct PESAWAT *pesawat, struct RINTANGAN rintangan[]) {
    	gotoxy(0, 0); // Mengatur posisi konsol

	// Perulangan untuk membuat area tampilan pesawat dan rintangan
    	for(int a = 0; a < tinggi; a++) {
        	for(int b = 0; b < lebar; b++) {
            		if((a == pesawat->y) and (b == pesawat->x)) {
                		printf("A");
            		} else {
                		bool RintanganMuncul = false;
                
                		// Perulangan untuk memunculkan rintangan
                		for(int c = 0; c < JumlahRintangan; c++) {
                    			if((a == rintangan[c].y) and (b == rintangan[c].x) and rintangan[c].aktif) {
                        		printf("*");
                        
                        		RintanganMuncul = true;
                        		break;
                    			}
                		}
                		if(!RintanganMuncul) {
                    			printf(" ");
                		}
            		}
        	}
        	printf("\n");
    	}
}

// Fungsi untuk menggerakkan pesawat
void GerakPesawat(struct PESAWAT *pesawat, char input) {
    if(input == 'a' and pesawat->x > 0) {
        pesawat->x--;
    } else if(input == 'd' and pesawat->x < lebar - 1) {
        pesawat->x++;
    }
}

// Fungsi untuk pergerakan rintangan
void GerakRintangan(struct RINTANGAN rintangan[]) {
    for (int a = 0; a < JumlahRintangan; a++) {
        if (rintangan[a].aktif) {
            rintangan[a].y++;

            if (rintangan[a].y >= tinggi) {
                rintangan[a].y = 0;
                rintangan[a].x = rand() % lebar;
            }
        }
    }
}

// Fungsi untuk menyimpan skor tertinggi ke dalam file .txt
void SimpanSkor(int skor) {
    FILE *file;
    file = fopen("highscoreTHEPLANE.txt", "w");
    
    if(file != NULL) {
        fprintf(file, "%d", skor);
        fclose(file);
    }
}

// Fungsi untuk membaca skor tertinggi dari file .txt
int BacaSkorTertinggi() {
    int SkorTertinggi = 0;
    
    FILE *file;
    file = fopen("highscoreTHEPLANE.txt", "r");
    
    if (file != NULL) {
        fscanf(file, "%d", &SkorTertinggi);
        fclose(file);
    } else {
        printf("Tidak dapat membaca skor tertinggi\n");
    }
    
    return SkorTertinggi; // Mengembalikan nilai skor tertinggi
}

int main() {
	permainan :
	srand(time(NULL)); // Menginisialisasi pembuatan nomor acak seiring berjalannya waktu
    
    	struct PESAWAT pesawat;
    	struct RINTANGAN rintangan[JumlahRintangan];

	int skor = 0;
	int tunda = 100;
	int hitungan = 0;
    	int SkorTertinggi = BacaSkorTertinggi();
	float kecepatan = 1.0;
    	char input;
	bool gameover = false;
    
	//Blok kode untuk membuat kursor program menjadi tidak terlihat
    	HANDLE konsol = GetStdHandle(STD_OUTPUT_HANDLE);
    	CONSOLE_CURSOR_INFO InfoKursor;
    	GetConsoleCursorInfo(konsol, &InfoKursor);
    	InfoKursor.bVisible = 0;
    	SetConsoleCursorInfo(konsol, &InfoKursor);
    
    	MenuUtama();
    	inisialisasi(&pesawat, rintangan);
    
    	while(!gameover) {
        	gotoxy(0, 0);
        	printf ("\t\t\tSkor Anda : %d\n", skor);
        	printf ("\t\t\tKecepatan : %.1fx\n\n", kecepatan);
		
        	tampilan(&pesawat, rintangan);

        	if(kbhit()) {
			input = getch();
            		GerakPesawat(&pesawat, input);
        	}
        	GerakRintangan(rintangan);

        	for(int a = 0; a < JumlahRintangan; ++a) {
            		if (rintangan[a].aktif and rintangan[a].x == pesawat.x and rintangan[a].y == pesawat.y) {
                		gameover = true;
                		break;
            		}
        	}
        	for(int a = 0; a < lebar; a++) {
        		printf ("=");
		}
		printf ("\n");
		
		// Penggunaan decision making untuk memberi delay awal
		if(hitungan == NULL) {
			printf ("\nBersiap...\n");
			
			for(int a = 3; a > 0; a--) {
				printf ("%d", a);
				Sleep(333);
				
				for(int b = 0; b < 2; b++) {
					printf (".");
				Sleep(333);
				}
			}
			system("cls");
		}
        	Sleep(tunda); // Delay untuk mengatur kecepatan permainan
        	hitungan++;
        
        	// Penggunaan decision making untuk mempersingkat delay
        	if(hitungan % 100 == 0) {
        		tunda -= 5;
        		kecepatan += 0.1;
		}
		
        	// Penggunaan decision making untuk menghitung jumlah skor
        	if(hitungan % 10 == 0) {
        		skor += 10;
		}
		
		//Penggunaan decision making untuk memberhentikan program sementara
		if(input == 'p') {
			printf ("\n");
			system ("pause");
			input = NULL;
			system ("cls");
		}
    	}
    	gotoxy(0, 3);
    	printf ("\t\t\tPesawat anda menabrak sebuah rintangan\n");
    	printf ("\t\t\tPermainan selesai!\n\n");
    
    	if(skor > SkorTertinggi) {
    		printf ("\t\t\tKamu meraih skor tertinggi\n");
    		printf ("\t\t\tSkormu telah tersimpan di file highscoreTHEPLANE.txt\n");
    		SkorTertinggi = skor; // Perbarui highscore jika skor saat ini lebih tinggi
        	SimpanSkor(SkorTertinggi);
	} else {
		printf ("\t\t\tSkor tertinggi anda : %d", SkorTertinggi);
	}
	gotoxy(0, tinggi+2);
	system("pause");
	goto permainan;
	
    	return 0;
}
