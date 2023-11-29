//Developed by : Bobskyz
#include<stdio.h>

int main(){
	float hasil;
	int pilihan, a, b, keluar;
	
	do{
		printf("==========\nKalkulator\n==========\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Hasil Bagi\n0. Keluar\n");
		printf("\nInputkan kode pilihan : ");
		scanf("%d", &pilihan);
		
		switch(pilihan){
			case 1 :
				printf("\n----------Penjumlahan----------\n");
				scanf("%d", &a);
				printf("+\n");
				scanf("%d", &b);
				
				hasil = a+b;
				
				printf("Hasil dari %d + %d = %.0f\n\n", a, b, hasil);
				break;
			case 2 :
				printf("\n----------Pengurangan----------\n");
				scanf("%d", &a);
				printf("-\n");
				scanf("%d", &b);
				
				hasil = a-b;
				
				printf("Hasil dari %d - %d = %.0f\n\n", a, b, hasil);
				break;
			case 3 :
				printf("\n----------Perkalian----------\n");
				scanf("%d", &a);
				printf("X\n");
				scanf("%d", &b);
				
				hasil = a*b;
				
				printf("Hasil dari %d X %d = %.0f\n\n", a, b, hasil);
				break;
			case 4 :
				printf("\n----------Pembagian----------\n");
				scanf("%d", &a);
				printf("/\n");
				scanf("%d", &b);
				
				hasil = a/b;
				
				printf("Hasil dari %d / %d = %.2f\n\n", a, b, hasil);
				break;
			case 5 :
				printf("\n----------Hasil Bagi----------\n");
				scanf("%d", &a);
				scanf("%d", &b);
				
				hasil = a%b;
				
				printf("Hasil bagi dari %d dengan %d = %.0f\n\n", a, b, hasil);
				break;
			case 0 :
				break;
			default :
				printf("Kode input tidak diketahui\n\n");
				break;
		}
	} while(pilihan != 0);
	
	return 0;
}
