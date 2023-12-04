//Developed by : Dafin Surya
#include<stdio.h>

int main(){
	int banyak;
	
	printf ("Inputkan banyak siswa : ");
	scanf ("%d", &banyak); fflush (stdin);
	printf ("\n");
	
	char NamaMhs[banyak][50];
	
	for (int a = 0; a < banyak; a++){
		printf ("Inputkan Nama Mahasiswa ke-%d : ", a+1);
		gets(NamaMhs[a]);
	}
	for (int b = 0; b < banyak; b++){
		printf ("\nNama Mahasiswa ke-%d : %s", b+1, NamaMhs[b]);
	}
	return 0;
}
