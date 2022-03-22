#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	string nama,ulang;
	int pertalite=7000,pertamax=9000,bensin,liter;
	float total;
	
		cout<<"Pilih Jenis Bensin"<<endl;
		cout<<"1. Pertalite"<<endl;
		cout<<"2. Pertamax"<<endl;
		cout<<"=================================\n";
		cout<<"Masukkan Pilihan : ";cin>>bensin;
	switch(bensin){
		case 1:
			cout<<"Masukkan Nama : ";cin>>nama;
			cout<<"Masukkan Total Liter : ";cin>>liter;
			cout<<"=====================================\n";
			cout<<"Nama Pelanggan : "<<nama<<endl;
			cout<<"Total Liter : "<<liter<<endl;
			cout<<"Jenis Bensin : Pertalite"<<endl;
			total=pertalite*liter;
			cout<<"Total Harga : Rp. "<<total<<endl;
			break;
		case 2:
			cout<<"Masukkan Nama : ";cin>>nama;
			cout<<"Masukkan Total Liter : ";cin>>liter;
			cout<<"=====================================\n";
			cout<<"Nama Pelanggan : "<<nama<<endl;
			cout<<"Total Liter : "<<liter<<endl;
			cout<<"Jenis Bensin : Pertamax"<<endl;
			total=pertamax*liter;
			cout<<"Total Harga : Rp. "<<total<<endl;
			break;
	}
	
	return 0;
}

