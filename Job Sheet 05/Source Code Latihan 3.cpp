#include<stdio.h>

int main(){
	int pilihan;
	printf("1. Rumus Luas Permukaan Bola\n2. Rumus Luas Permukaan Kubus\n3. Rumus Luas Permukaan Balok\n4. Rumus Luas Permukaan Tabung"
	"\n\nInputkan Pilihan : ");
	scanf("%d", &pilihan);
	
	switch(pilihan){
		case 1 :
			printf("\nRumus Luas Permukaan Bola :\nL = 4*phi*r*r");
			break;
		case 2 : 
			printf("\nRumus Luas Permukaan Kubus :\nL = 6*s*s");
			break;
		case 3 :
			printf("\nRumus Luas Permukaan Balok :\nL = 2*(p*l + p*t + l*t)");
			break;
		case 4 :
			printf("\nRumus Luas Permukaan Tabung :\nL = 2*phi*r*(r+t)");
			break;
		default :
			printf("\nInputan tidak diketahui");
			break;
	}
	return 0;
}
