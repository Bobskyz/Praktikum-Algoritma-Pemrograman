//Developed by : Bobskyz
#include<stdio.h>

int main(){
	int jam, menit, detik, waktu;
	
	printf("Inputkan jumlah waktu dalam detik : ");
	scanf("%d", &waktu);
	
	jam = waktu/3600;
	menit = (waktu%3600)/60;
	detik = waktu%60;
	
	printf("= %d jam, %d menit, %d detik", jam, menit, detik);
	
	return 0;
}
