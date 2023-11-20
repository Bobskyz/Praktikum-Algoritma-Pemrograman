#include<stdio.h>

float potong (float pembelian){
	if (pembelian >= 1000000 and pembelian < 3000000){
		return pembelian -= pembelian*0.2;
	} else if (pembelian >= 3000000){
		return pembelian -= pembelian*0.35;
	}
}

int main (){
	float pembelian;
	
	printf ("Total pembelian (Rp.)\t\t: ");
	scanf ("%f", &pembelian);
	
	if (pembelian >= 1000000 and pembelian < 3000000){
		char diskon[] = "20%";
		printf ("Besar diskon\t\t\t: %s", diskon);
	} else if (pembelian >= 3000000){
		char diskon[] = "35%";
		printf ("Besar diskon\t\t\t: %s", diskon);
	} else {
		char diskon[] = "0%";
		printf ("Besar diskon\t\t\t: %s", diskon);
	}
	
	printf ("\nBesar yang harus dibayarkan\t: %.2f", potong(pembelian));
	
	return 0;
}
