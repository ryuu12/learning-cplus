#include <iostream>

using namespace std;

struct Dealer{
	string namaDealer, lokasiDealer;
};

struct Mobil{
	string merek, tipe;
	Dealer penjual;
	int harga;
};

void invoiceMobil( Mobil data ){
	cout << "Dealer: " << data.penjual.namaDealer << endl;
	cout << "Merek: " << data.merek << endl;
	cout << "Tipe: " << data.tipe << endl;
	cout << "Harga: " << data.harga << endl;
}

int main(){
	
	Mobil lamborgini[2];

	Dealer dealerBogor = {"Bogor Dealership", "Kota Bogor"};

	lamborgini[0].merek = "Lamborghini";
	lamborgini[0].tipe = "Aventador";
	lamborgini[0].penjual = dealerBogor;
        lamborgini[0].harga = 22;

	lamborgini[1].merek = "Lamborghini";
	lamborgini[1].tipe = "Hurracan";
	lamborgini[1].penjual = dealerBogor;
        lamborgini[1].harga = 27;

	invoiceMobil(lamborgini[0]);
	cout << "\n\n" << endl;
	invoiceMobil(lamborgini[1]);
	
}
