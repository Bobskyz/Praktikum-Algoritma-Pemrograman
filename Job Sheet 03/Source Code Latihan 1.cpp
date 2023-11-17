#include<stdio.h>

int main(){
	float dollar;
	int rupiah = 2500000;
	
	dollar = rupiah/14250;
	
	printf("Rp. %d = %.2f $", rupiah, dollar);
	
	return 0;
}
