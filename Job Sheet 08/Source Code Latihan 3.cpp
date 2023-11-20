#include<stdio.h>

#define phi 3.14

float luas (int r){
	return phi*r*r;
}

float keliling (int r){
	return phi*(2*r);
}

int main (){
	int r, pil;
	
	printf ("1. Menghitung Luas Lingkaran\n2. Menghitung Keliling Lingkaran\n\nInputkan pilihan : ");
	scanf ("%d", &pil);
	
	switch(pil){
		case 1 :
			printf ("\nInputkan jari-jari lingkaran : ");
			scanf ("%d", &r);
			
			printf ("Luas lingkaran tersebut = %.2f", luas(r));
			break;
		
		case 2 :
			printf ("\nInputkan jari-jari lingkaran : ");
			scanf ("%d", &r);
			
			printf ("Keliling lingkaran tersebut = %.2f", keliling(r));
			break;
			
		default :
			printf ("\nKode inputan tidak diketahui\n");
			break;
	}
	
	return 0;
}
