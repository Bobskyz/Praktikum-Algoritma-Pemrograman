//Developed by : Bobskyz
#include<stdio.h>

int main(){
	int tarif = 15000, jam, TotalBayar = tarif;
	
	printf("Inputkan durasi rental film (jam)\t: ");
	scanf("%d", &jam);
	
	if(jam > 1){
		for(int a = 1; a < jam; a++){
			TotalBayar += tarif/2;
		}
	}
	printf("Total bayar \t\t\t\t= %d", TotalBayar);
	
	return 0;
}
