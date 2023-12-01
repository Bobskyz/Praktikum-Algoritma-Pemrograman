//Developed by : Dafin Surya
#include<stdio.h>

int main (){
	int ditemukan, cari, NilaiRtRt[20] = {59, 67, 92, 83, 74, 91, 78, 94, 88, 84,
										  80, 70, 82, 76, 79, 58, 52, 75, 63, 69};
					   
	printf ("Inputkan Nilai rata-rata yang akan dicari (0-100): ");
	scanf ("%d", &cari);
	
	for (int a = 0; a < 20; a++){
		if (cari == NilaiRtRt[a]){
			printf ("\nNilai Rata-Rata tersebut berada pada data Mahasiswa ke-%d\n", a+1);
			ditemukan = 1;
			break;
		}
	}
	
	if (ditemukan != 1){
		printf ("\nNilai Rata-Rata tersebut tidak ditemukan\n");
	}
	
	return 0;
}
