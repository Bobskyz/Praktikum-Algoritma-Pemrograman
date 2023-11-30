//Developed by : Dafin Surya
#include<stdio.h>

int main() {
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

	printf ("A\n");
    printf ("Nilai Layla : %d\n", Layla);
    printf ("Nilai Balmond : %d\n", Balmond);

    int Lesley1 = 57082;
    int *Layla1 = &Lesley1;
    int Balmond1 = *Layla1 + 1;

	printf ("\nB\n");
    printf ("Nilai Layla : %d\n", *Layla1);
    printf ("Nilai Balmond : %d\n", Balmond1);

    return 0;
}
