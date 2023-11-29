//Developed by : Bobskyz
#include<stdio.h>
#define phi 3.14

int main(){
	int d = 12;
	float r, V, L;
	
	r = d/2;
	V = (4/3) *phi*r*r*r;
	L = 4*phi*r*r;
	
	printf("Diketahui sebuah bola dengan diameter = %d cm", d);
	printf("\n\nVolume bola tersebut \t= %.2f cm\nLuas bola tersebut \t= %.2f cm", V, L);
	
	return 0;
}
