//Developed by : Dafin Surya
#include<stdio.h>
#include<string.h>

int main() {
    char kalimat[50];
    printf ("Inputkan sebuah kalimat : ");
    gets (kalimat);

    int panjang = strlen(kalimat);
    printf ("Kebalikannya : ");
    
    for(int a = panjang - 1; a >= 0; a--) {
        printf ("%c", kalimat[a]);
    }
    return 0;
}
