//Developed by : Dafin Surya
#include<stdio.h>

int sum (int a, int b);

int main (){
	int a, b;
	
	printf ("Inputkan nilai a : ");
	scanf ("%d", &a);
	printf ("Inputkan nilai b : ");
	scanf ("%d", &b);
	int hasil = a*b;
	
	printf ("\n%d x %d = ", a, b);
	sum(a, b);
	
	printf (" = %d", hasil);
	
	return 0;
}

int sum(int a, int b){
	if (b != 1){
		b--;
		printf ("%d + ", a);
		return a + sum(a, b);
	} else {
		printf ("%d", a);
		return a;
	}
}
