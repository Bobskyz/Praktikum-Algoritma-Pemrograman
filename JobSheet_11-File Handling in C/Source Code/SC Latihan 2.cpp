//Developed by : Dafin Surya
#include<stdio.h>

int main() {
    FILE *file;
    char karakter;

    file = fopen ("datamahasiswa.txt", "r");
    
    if(file == NULL) {
        printf ("Tidak dapat membuka file\n");
        return 1;
    }
    printf ("Isi dari file datamahasiswa.txt :\n\n");
    
    while((karakter = fgetc(file)) != EOF) {
        putchar(karakter);
    }
    fclose(file);
    
    return 0;
}
