//Developed by : Dafin Surya
#include<stdio.h>

int main() {
    char nama[50], nim[20], jurusan[50], prodi[50];
    int JumlahMhs;
    FILE *file;
    
    printf ("Masukkan jumlah mahasiswa : ");
    scanf ("%d", &JumlahMhs);
    getchar();

    file = fopen ("datamahasiswa.txt", "w");
    
    for(int a = 1; a <= JumlahMhs; a++) {
        printf ("\nMasukkan data mahasiswa ke-%d\n", a);
        printf ("Nama \t\t: ");
		gets (nama);
        printf ("NIM \t\t: ");
		gets (nim);
        printf ("Jurusan \t: ");
		gets (jurusan);
        printf ("Program Studi \t: ");
		gets (prodi);

		if(a > 1) {
			fprintf (file, "\n\n");
		}
		fprintf (file, "Data Mahasiswa ke-%d\n", a);
        fprintf (file, "Nama \t\t: %s\n", nama);
        fprintf (file, "NIM \t\t: %s\n", nim);
        fprintf (file, "Jurusan \t: %s\n", jurusan);
        fprintf (file, "Program Studi \t: %s", prodi);
    }
    fclose(file);

    printf ("\nData mahasiswa telah disimpan dalam file datamahasiswa.txt");

    return 0;
}
