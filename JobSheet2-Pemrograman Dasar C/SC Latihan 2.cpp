//Developed by : Dafin Surya
#include<stdio.h>

int main(){
	char nama[50], prodi[20], fakultas[20];
	int nim, n_prakt, n_uts, n_uas;
	float n_akhir;
	
	printf("Nama \t\t: ");
	gets(nama);
	
	printf("NIM \t\t: ");
	scanf("%d", &nim);
	fflush(stdin);
	
	printf("Prodi \t\t: ");
	gets(prodi);
	
	printf("Fakultas \t: ");
	gets(fakultas);
	
	printf("Nilai Praktikum : ");
	scanf("%d", &n_prakt);
	
	printf("Nilai UTS \t: ");
	scanf("%d", &n_uts);
	
	printf("Nilai UAS \t: ");
	scanf("%d", &n_uas);
	
	n_akhir = (n_prakt*0.3) + (n_uts*0.3) + (n_uas*0.4);
	
	printf("Nilai Akhir \t: %.2f\n", n_akhir);
	
	return 0;
}
