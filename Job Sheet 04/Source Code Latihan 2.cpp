#include<stdio.h>

int main(){
	char NamaPembeli[50], NamaBarang[50];
	int HargaBarang, JumlahBarang;
	
	printf("Inputkan nama pembeli \t\t\t: ");
	gets(NamaPembeli);
	
	printf("Inputkan nama barang yang dibeli \t: ");
	gets(NamaBarang);
	
	printf("Inputkan harga barang satuan \t\t: ");
	scanf("%d", &HargaBarang);
	
	printf("Inputkan jumlah barang yang dibeli \t: ");
	scanf("%d", &JumlahBarang);
	
	int HargaTotal = HargaBarang*JumlahBarang;
	
	printf("\nHarga pembelian total \t\t\t= %d", HargaTotal);
	
	return 0;
}
