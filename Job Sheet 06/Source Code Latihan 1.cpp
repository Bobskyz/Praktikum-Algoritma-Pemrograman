#include<stdio.h>

int main (){
	for (int a = 0; a <= 50; a++){
		printf ("%d", a);
		a++;
		
		if (a < 50){
			printf (", ");
		} else {
			printf ("\n\n");
		}
	}
	for (int b = 1; b <= 50; b++){
		printf ("%d", b);
		b++;
		
		if (b < 50){
			printf (", ");
		}
	}
	return 0;
}
