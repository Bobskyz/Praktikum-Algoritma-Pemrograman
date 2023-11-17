#include<stdio.h>

int main(){
	int panjang = 10, lebar = 5;
	float luas;
	
	printf("Diketahui sebuah persegi panjang dengan panjang = %d cm, dan lebar = %d cm", panjang, lebar);
	
	luas = panjang*lebar;
	
	printf("\n\nLuas persegi panjang tersebut = %.2f cm\n", luas);
	
	return 0;
}
