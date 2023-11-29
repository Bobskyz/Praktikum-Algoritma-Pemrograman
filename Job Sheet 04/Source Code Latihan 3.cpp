//Developed by : Bobskyz
#include<stdio.h>

int main(){
	int NilaiPresensi = 85, NilaiPraktek = 65, NilaiUTS = 80, NilaiUAS = 75;
	float NilaiAkhir = NilaiPresensi*0.1 + NilaiPraktek*0.2 + NilaiUTS*0.3 + NilaiUAS*0.4;
	
	printf("Nilai akhir = %.2f + %.2f + %.2f + %.2f = %.2f", NilaiPresensi*0.1, NilaiPraktek*0.2, NilaiUTS*0.3, NilaiUAS*0.4, NilaiAkhir);
	
	return 0;
}
