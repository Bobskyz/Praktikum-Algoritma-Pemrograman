#include<stdio.h>

int main(){
	int alas = 8, tinggi = 5;
	float luas;
	
	printf("Diketahui sebuah segitiga dengan panjang alas = %d cm, dan tinggi = %d cm", alas, tinggi);
	
	luas = alas*tinggi/2;
	
	printf("\n\nLuas segitiga tersebut = %.2f cm\n", luas);
	
	return 0;
}
