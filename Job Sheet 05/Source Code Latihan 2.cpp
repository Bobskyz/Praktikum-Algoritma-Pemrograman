//Developed by : Bobskyz
#include<stdio.h>
#include<stdlib.h>

int main(){
	int pilihan, gula = 14000, garam = 10000, TepungTerigu = 12000, beras = 15000, MinyakTanah = 16000, jumlah, total = 0;
	
	do{
		system("cls");
		printf("=======\nTOSERBA\n=======\n");
		printf("Total pembelian = Rp. %d\n\n", total);
		printf("Barang Tersedia :\n1. Gula \t = Rp. %d/kg\n2. Garam \t = Rp. %d/kg\n3. Tepung Terigu = Rp. %d/kg\n4. Beras \t = Rp. %d/kg\n"
		 	   "5. Minyak Tanah  = Rp. %d/L\n0. Lakukan Pembayaran\n\nInputkan pilihan : ", gula, garam, TepungTerigu, beras, MinyakTanah);
		scanf("%d", &pilihan);
		printf("--------------------\n");
	
		switch(pilihan){
			case 1 :
				printf("Jumlah : ");
				scanf("%d", &jumlah);
				
				total += gula*jumlah;
				break;
			case 2 :
				printf("Jumlah : ");
				scanf("%d", &jumlah);
				
				total += garam*jumlah;
				break;
			case 3 :
				printf("Jumlah : ");
				scanf("%d", &jumlah);
				
				total += TepungTerigu*jumlah;
				break;
			case 4 :
				printf("Jumlah : ");
				scanf("%d", &jumlah);
				
				total += beras*jumlah;
				break;
			case 5 :
				printf("Jumlah : ");
				scanf("%d", &jumlah);
				
				total += MinyakTanah*jumlah;
				break;
			case 0 :
				if(total <= 75000 and total > 0){
					total -= total*0.05;
					printf("Anda mendapatkan diskon sebesar 5 Persen\n\nTotal pembayaran = Rp. %d", total);
				} else if(total > 75000 and total <= 125000){
					total -= total*0.15;
					printf("Anda mendapatkan diskon sebesar 15 Persen\n\nTotal pembayaran = Rp. %d", total);
				} else if(total > 125000){
					total -= (total*0.25) +5000;
					printf("Anda mendapatkan diskon sebesar 25 Persen dan cashback sebesar Rp. 5000\n\nTotal pembayaran = Rp. %d", total);
				} else{
					printf("Anda tidak membeli apapun\n\nTotal pembayaran = Rp. %d", total);
				}
				break;
			default :
				printf("Kode inputan tidak diketahui");
				break;
		}
	}while(pilihan != 0);
	
	return 0;
}
