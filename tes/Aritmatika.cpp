#include<iostream>
using namespace std;

int main(){
	int a, b, hasil;
	string ulang;
	
	do{
		cout<<"-------------------------------------"
		cout<<"Masukkan angka untuk variabel a : ";
		cin>>a;
		cout<<"Masukkan angka untuk variabel b : ";
		cin>>b;
		
		hasil = (a*a)+(b*b*b);
		
		cout<<"Hasil dari a pangkat 2 + b pangkat 3 = "<<hasil<<endl;
		
		cout<<"Ulangi proses (y/n) : ";
		cin>>ulang;
	} while (ulang == "y");
	
	cout<<"Udah gitu doang";
	
}
