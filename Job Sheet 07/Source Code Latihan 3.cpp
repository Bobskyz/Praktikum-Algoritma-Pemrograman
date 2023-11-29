//Developed by : Bobskyz
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){
	char input_username[20], input_pw[20], pw[] = "bobsky1234";
	
	do {
		printf ("Inputkan Username : ");
		scanf ("%s", &input_username);
		printf ("Inputkan Password : ");
		scanf ("%s", &input_pw);
		
		if (strcmp(input_pw, pw) == 0){
			printf ("\nBehasil login");
		} else {
			printf ("\nPassword salah\nSilakan input ulang\n\n");
			system("PAUSE");
			system("cls");
		}
	} while (strcmp(input_pw, pw) != 0);
	
	return 0;
}
