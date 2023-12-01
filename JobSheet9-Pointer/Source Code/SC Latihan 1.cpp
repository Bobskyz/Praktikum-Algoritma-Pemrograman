//Developed by : Dafin Surya
#include<stdio.h>
#include<string.h>

int main() {
    char kata[] = "DNALROB";
    int panjang = strlen(kata);

    for(int a = 0; a < panjang; a++) {
        for(int b = a; b >= 0; b--) {
            printf ("%c", kata[b]);
        }
        printf ("\n");
    }
    return 0;
}
