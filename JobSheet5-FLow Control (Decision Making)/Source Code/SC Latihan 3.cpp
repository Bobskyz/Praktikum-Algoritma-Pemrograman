//Developed by : Dafin Surya
#include<stdio.h>

int main(){
	int pilihan;
	printf("1. Rumus Luas Permukaan Bola\n2. Rumus Luas Permukaan Kubus\n3. Rumus Luas Permukaan Balok\n"
		   "4. Rumus Luas Permukaan Tabung\n\nInputkan Pilihan : ");
	scanf("%d", &pilihan);
	
	switch(pilihan){
		case 1 : {
			float r;
			printf("Inputkan panjang diameter bola : ");
			scanf("%f", &r);
			r /= 2;
			float hasil = 4*3.14*r*r;
			
			printf("\nRumus Luas Permukaan Bola :\nL = 4*phi*r*r\n");
			printf("L = 4*3.14*%.2f*%.2f\n", r, r);
			printf("L = %.2f\n", hasil);
			break;
		}
		case 2 : {
			int sisi;
			printf("Inputkan panjang sisi kubus : ");
			scanf("%d", &sisi);
			int hasil = 6*sisi*sisi;
			
			printf("\nRumus Luas Permukaan Kubus :\nL = 6*s*s\n");
			printf("L = 6*%d*%d\n", sisi, sisi);
			printf("L = %d\n", hasil);
			break;
		}
		case 3 : {
			int p, l, t;
			printf("Inputkan panjang balok : ");
			scanf("%d", &p);
			printf("Inputkan lebar balok : ");
			scanf("%d", &l);
			printf("Inputkan tinggi balok : ");
			scanf("%d", &t);
			int hasil = 2*(p*l + p*t + l*t);
			
			printf("\nRumus Luas Permukaan Balok :\nL = 2*(p*l + p*t + l*t)\n");
			printf("L = 2*(%d*%d + %d*%d + %d*%d)\n", p, l, p, t, l, t);
			printf("L = %d\n", hasil);
			break;
		}
		case 4 : {
			float r;
			int t;
			printf("Inputkan panjang diameter tabung : ");
			scanf("%f", &r);
			printf("Inputkan tinggi tabung : ");
			scanf("%d", &t);
			r /= 2;
			float hasil = 2*3.14*r*(r+t);
			
			printf("\nRumus Luas Permukaan Tabung :\nL = 2*phi*r*(r+t)\n");
			printf("L = 2*3.14*%.2f*(%.2f + %d)\n", r, r, t);
			printf("L = %.2f\n", hasil);
			break;
		}
		default :
			printf("\nInputan tidak diketahui");
			break;
	}
	return 0;
}
