//Developed by : Dafin Surya
#include<stdio.h>

int main(){
	int NilaiKehadiran, NilaiTugas, NilaiUTS, NilaiUAS;
	float NilaiAkhir;
	char skor;
	
	printf ("Inputkan nilai kehadiran (0-100): ");
	scanf ("%d", &NilaiKehadiran);
	printf ("Inputkan nilai tugas     (0-100): ");
	scanf ("%d", &NilaiTugas);
	printf ("Inputkan nilai UTS       (0-100): ");
	scanf ("%d", &NilaiUTS);
	printf ("Inputkan nilai UAS       (0-100): ");
	scanf ("%d", &NilaiUAS);
	
	NilaiAkhir = (NilaiKehadiran*0.2) + (NilaiTugas*0.2) + (NilaiUTS*0.25) + (NilaiUAS*0.35);
	
	printf ("\nNilai akhir = %.2f\n", NilaiAkhir);
	
	if (NilaiAkhir >= 0 and NilaiAkhir < 56){
		if (NilaiAkhir >= 0 and NilaiAkhir < 45){
			skor = 'E';
		} else if (NilaiAkhir >= 45 and NilaiAkhir < 56){
			skor = 'D';
		}
		printf ("Skor = %c\nMaaf, anda tidak lulus!", skor);
	} else if (NilaiAkhir >= 56 and NilaiAkhir < 66){
		skor = 'C';
		printf ("Skor = %c\nAnda lulus, tingkatkan lagi untuk kedepannya!", skor);
	} else if (NilaiAkhir >= 66 and NilaiAkhir < 86){
		if (NilaiAkhir >= 66 and NilaiAkhir < 76){
			skor = 'B';
			printf ("Skor = %c-\nAnda lulus dengan baik, tingkatkan terus belajarnya!", skor);
		} else if (NilaiAkhir >= 76 and NilaiAkhir < 81){
			skor = 'B';
			printf ("Skor = %c\nAnda lulus dengan baik, tingkatkan terus belajarnya!", skor);
		} else if (NilaiAkhir >= 81 and NilaiAkhir < 86){
			skor = 'B';
			printf ("Skor = %c+\nAnda lulus dengan baik, tingkatkan terus belajarnya!", skor);
		}
	} else if (NilaiAkhir >= 86 and NilaiAkhir <= 100){
		if (NilaiAkhir >= 86 and NilaiAkhir < 91){
			skor = 'A';
			printf ("Skor anda = %c-\nSelamat! Anda lulus dengan nilai yang sangat memuaskan!", skor);
		} else if (NilaiAkhir >= 91 and NilaiAkhir <= 100){
			skor = 'A';
			printf ("Skor anda = %c\nSelamat! Anda lulus dengan nilai yang sangat memuaskan!", skor);
		}
	} else {
		printf ("Nilai akhir anda tidak sesuai standar");
	}
	return 0;
}
