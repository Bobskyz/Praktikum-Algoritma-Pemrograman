//Developed by : Dafin Surya
#include<stdio.h>

int penjumlahan (int a, int b){
	return a+b;
}

int pengurangan (int a, int b){
	return a-b;
}

int perkalian (int a, int b){
	return a*b;
}

float pembagian (int a, int b){
	return a/b;
}

int main (){
	int a, b, pilihan;
	
	printf ("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n\nInputkan pilihan : ");
	scanf ("%d", &pilihan);
	
	switch (pilihan){
		case 1 :
			printf ("Inputkan nilai variabel a : ");
			scanf ("%d", &a);
			printf ("Inputkan nilai variabel b : ");
			scanf ("%d", &b);
			printf ("\nHasil dari %d + %d = %d", a, b, penjumlahan(a, b));
			break;
			
		case 2 :
			printf ("Inputkan nilai variabel a : ");
			scanf ("%d", &a);
			printf ("Inputkan nilai variabel b : ");
			scanf ("%d", &b);
			printf ("\nHasil dari %d - %d = %d", a, b, pengurangan(a, b));
			break;
			
		case 3 :
			printf ("Inputkan nilai variabel a : ");
			scanf ("%d", &a);
			printf ("Inputkan nilai variabel b : ");
			scanf ("%d", &b);
			printf ("\nHasil dari %d x %d = %d", a, b, perkalian(a, b));
			break;
			
		case 4 :
			printf ("Inputkan nilai variabel a : ");
			scanf ("%d", &a);
			printf ("Inputkan nilai variabel b : ");
			scanf ("%d", &b);
			printf ("\nHasil dari %d / %d = %.2f", a, b, pembagian(a, b));
			break;
			
		default :
			break;
	}
}
