#include <iostream>
using namespace std;

struct Pengirim{
	string nama, domisili;
};

struct Paket{
	string jenis, isi, tujuan;
	Pengirim orang;
	int ongkos;
};

void resi( Paket data ){
	cout << "Jenis Barang: " << data.jenis << endl;
	cout << "Isi: " << data.isi << endl;
	cout << "Alamat Tujuan: " << data.tujuan << endl;
	cout << "Pengirim: " << data.orang.nama << endl;
	cout << "Asal: " << data.orang.domisili << endl;
	cout << "Ongkos Kirim: " << data.ongkos << endl;
}

int main(){
	Pengirim rudi = {"Rudi", "Kota Bogor"};
	Pengirim mahmud = {"Mahmud", "Kota Bandung"};

	Paket barang[2];

	barang[0].jenis = "Dokumen";
	barang[0].isi = "Arsip Foto";
	barang[0].tujuan = "Kota Malang";
	barang[0].orang = rudi;
	barang[0].ongkos = 50000;

	barang[1].jenis = "Perabotan";
	barang[1].isi = "Gayung";
	barang[1].tujuan = "Kota Surabaya";
	barang[1].orang = mahmud;
	barang[1].ongkos = 20000;

	resi(barang[0]);
	cout << "\n" << endl;
	resi(barang[1]);

}
