//Developed by : Dafin Surya
#include<stdio.h>
#include<stdlib.h>

#define MaxMhs 50

typedef struct{
	int npm;
	char nama[50];
	char TanggalLahir[20];
	char alamat[100];
	char hp[20];
}DataMhs;

void judul() {
	printf ("================\n");
	printf ("Daftar Mahasiswa\n");
	printf ("================\n");
}
void TambahMhs(DataMhs *mhs) {
	printf ("Silakan isi data dibawah\n");
	printf ("NPM\t\t: ");
	scanf ("%d", &mhs->npm); fflush(stdin);
	printf ("Nama \t\t: ");
	gets (mhs->nama);
	printf ("Tanggal Lahir \t: ");
	gets (mhs->TanggalLahir);
	printf ("Alamat \t\t: ");
	gets (mhs->alamat);
	printf ("HP \t\t: ");
	gets (mhs->hp);
}
void TampilkanData(DataMhs mhs) {
	printf ("%d\t%s\t%s\t%s\t%s\n", mhs.npm, mhs.nama ,mhs.TanggalLahir, mhs.alamat, mhs.hp);
}
int main() {
	DataMhs mhs[MaxMhs];
	char tambah;
	int JumlahMhs = 0;
	
	do {
		judul();
		TambahMhs(&mhs[JumlahMhs]);
		JumlahMhs++;
		
		printf ("\nMau memasukkan data lagi(y/t)? : ");
    	scanf (" %c", &tambah);
    	system("cls");
	} while(tambah == 'y');
	
	judul();
	
	for(int a = 0; a < JumlahMhs; a++) {
		TampilkanData(mhs[a]);
	}
	return 0;
}
