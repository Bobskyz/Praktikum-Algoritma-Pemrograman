#include<stdio.h>
#include<stdlib.h>

int main (){
	const char NoRek[] = "0123";
	int pilihan, saldo = 175000, setoran, penarikan;
	char nama[] = "Hatori";
	
	do {
		printf ("ATM\n===\n\t1) Cek Saldo\n\t2) Setoran\n\t3) Penarikan Tunai\n\t4) Exit\n\n");
		printf ("Inputkan Pilihan : ");
		scanf ("%d", &pilihan);
		
		switch (pilihan){
			case 1 :
				printf ("\nNo Rek\t\t: %s\nNama Akun\t: %s\nSaldo Anda\t: Rp. %d\n\n", NoRek, nama, saldo);
				
				system ("PAUSE");
				system ("cls");
				break;
				
			case 2 :
				printf ("\nNo Rek\t\t: %s\nNama Akun\t: %s\n", NoRek, nama);
				printf ("\nInputkan jumlah setoran\t: Rp. ");
				scanf ("%d", &setoran);
				saldo += setoran;
				printf ("\nSetoran berhasil ditambahkan ke saldo anda\n\n");
				
				system ("PAUSE");
				system ("cls");
				break;
				
			case 3 :
				printf ("\nNo Rek\t\t: %s\nNama Akun\t: %s\n", NoRek, nama);
				
				if (saldo > 50000){
					printf ("\nInputkan jumlah penarikan saldo\t: Rp. ");
					scanf ("%d", &penarikan);
					
					if (saldo > penarikan){
						saldo -= penarikan;
						printf ("\nPenarikan saldo berhasil\n\n");
						
						system ("PAUSE");
						system ("cls");
					} else {
						printf ("\nSaldo anda tidak mencukupi untuk melakukan penarikan\n\n");
						
						system ("PAUSE");
						system ("cls");
					}
				} else {
					printf ("\nSaldo anda tidak mencukupi untuk melakukan penarikan\nAnda harus memiliki sisa saldo lebih dari");
					printf ("Rp. 50000 untuk melakukan penarikan\n\n");
					
					system ("PAUSE");
					system ("cls");
				}
				break;
				
			case 4 :
				printf ("\nTerima Kasih :)");
				pilihan = 4;
				break;
				
			default :
				printf ("Kode inputan tidak diketahui !!!");
				
				system ("PAUSE");
				system ("cls");
				break;
		}
	} while (pilihan != 4);
	return 0;
}
