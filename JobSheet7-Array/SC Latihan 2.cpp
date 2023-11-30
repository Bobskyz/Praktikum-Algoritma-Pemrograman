//Developed by : Dafin Surya
#include<stdio.h>
#include<stdlib.h>

int main(){
	int banyak;
	
	printf ("Inputkan banyak siswa : ");
	scanf ("%d", &banyak);
	printf ("\n");
	
	char NamaMhs[banyak][20];
	
	for (int a = 0; a < banyak; a++){
		printf ("Inputkan Nama Mahasiswa ke-%d : ", a+1);
		scanf ("%s", &NamaMhs[a]);
	}
	
	system("cls");
	
	for (int b = 0; b < banyak; b++){
		printf ("Nama Mahasiswa ke-%d : %s\n", b+1, NamaMhs[b]);
	}
	
	return 0;
}
