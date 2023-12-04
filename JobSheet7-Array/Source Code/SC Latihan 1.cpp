//Developed by : Dafin Surya
#include<stdio.h>

int main (){
	int ditemukan, cari, NilaiMhs[20] = {59, 67, 92, 83, 74, 91, 78, 94, 88, 84,
					     80, 70, 82, 76, 79, 58, 52, 75, 63, 69};
	float nilai = 0;
					   
	for(int a = 0; a < 20; a++) {
		printf ("Nilai Mahasiswa ke-%d = %d\n", a+1, NilaiMhs[a]);
		nilai += NilaiMhs[a];
	}
	nilai /= 20;
	
	printf ("\nNilai rata-rata dari 20 nilai mahasiswa tersebut = %.2f", nilai);
	
	return 0;
}
