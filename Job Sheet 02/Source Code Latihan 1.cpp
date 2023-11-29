//Developed by : Bobsky
#include<stdio.h>

int main(){
	char nama[50];
	
	printf("Hello, siapa nama lengkapmu?\n= ");
	gets(nama);
	printf("\nSelamat datang %s dalam pemrograman C!\n", nama);
	
	return 0;
}
