//Developed by : Dafin Surya
#include<stdio.h>

int main (){
	for (int a = 1; a <= 5; a++){
		for (int b = 1; b <= a; b++){
			printf ("%d ", a*b);
		}
		printf ("\n");
	}
	return 0;
}
