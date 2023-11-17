#include<stdio.h>

int main(){
	int c;
	float k, f, r;
	
	printf("Input suhu (Celcius)\t= ");
	scanf("%d", &c);
	
	k = c+273.15;
	f = (c*1.8) +32;
	r = c*0.8;
	
	printf("Suhu dalam Kelvin \t= %.2f\nSuhu dalam Fahrenheit \t= %.2f\nSuhu dalam Reamur \t= %.2f", k, f, r);
	
	return 0;
}
