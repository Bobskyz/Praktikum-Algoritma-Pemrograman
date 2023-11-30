//Developed by : Dafin Surya
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Tebakan {
    LebihKecil,
    LebihBesar,
    benar
};
void judul() {
	printf ("================\n");
    printf ("Game Tebak Angka\n");
    printf ("================\n");
}
void permainan() {
	judul();

	enum Tebakan status;
	int percobaan = 0;
	
    do {srand(time(0));
		int tebakan, BatasTerendah = 1, BatasTertinggi = 20;
    	int RandomNumber = (rand() % (BatasTertinggi - BatasTerendah + 1)) + BatasTerendah;
    	
    	printf ("Tebak angka dari 1 sampai 20\n");
        printf ("Inputkan tebakan anda : ");
        scanf ("%d", &tebakan);

        percobaan++;

        if(tebakan < RandomNumber) {
            printf ("Nomor saya lebih besar!\n\n");
            status = LebihKecil;
        } else if(tebakan > RandomNumber) {
            printf ("Nomor saya lebih kecil!\n\n");
            status = LebihBesar;
        } else {
            printf ("\nSelamat, Anda benar!\n");
            printf ("Anda berhasil menebak dalam %d percobaan\n\n", percobaan);
            status = benar;
        }
    } while (status != benar);
}
int main() {
    char MainLagi;

    do {
        permainan();

        printf ("Ingin bermain lagi? (y untuk bermain kembali): ");
        scanf (" %c", &MainLagi);
    } while(MainLagi == 'y');
    
    system ("cls");
    printf ("Terima kasih telah bermain\n");
    system ("PAUSE");

    return 0;
}
