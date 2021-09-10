#include <iostream>

using namespace std;

struct Kampus
	string namaKampus, alamatKampus;
	int tahunBerdiri;
};

struct Mahasiswa{
	string nama, nim, jurusan;
	int umur;
	Kampus kps;
	struct AlamatMhs{
		string kota;	
	} alamat;	
	string hobi[3];
};

void cetakDataMhs( Mahasiswa data ){
	cout << "NIM Mahasiswa : " << data.nim << endl;
	cout << "Nama Mahasiswa : " << data.nama << endl;
	cout << "Jurusan Mahasiswa : " << data.jurusan << endl;
	cout << "Usia Mahasiswa : " << data.umur << endl;
	cout << "Hobi 2 Mahasiswa : " << data.hobi[1] << endl;
	cout << "Nama Kampus Mahasiswa : " << data.kps.namaKampus << endl;
	cout << "Alamat Kampus Mahasiswa : " << data.kps.alamatKampus<< endl;
	cout << "TB Kampus Mahasiswa : " << data.kps.tahunBerdiri<< endl;
	cout << "Alamat Mahasiswa : " << data.alamat.kota << endl;
}

int main(){
	
	Mahasiswa mhs[3];

	Kampus kpsA = {"Universitas A", "Indonesia", 2020};

	mhs[0].nim = "12345678";
	mhs[0].nama = "Joni";
	mhs[0].jurusan = "Teknik Komputer";
	mhs[0].umur = 19;
	mhs[0].hobi[0]="Main game";
	mhs[0].hobi[1]="belajar";
	mhs[0].hobi[2]="mancing";
	mhs[0].kps = kpsA;
	mhs[0].alamat.kota = "Kota Bandung";

	cetakDataMhs(mhs[0]);
	cout << "\n\n" << endl;
	
	mhs[1].nim = "13345678";
        mhs[1].nama = "Wahyu";
        mhs[1].jurusan = "Teknik Elektro";
        mhs[1].umur = 20;
        mhs[1].hobi[0]="Ngoding";
        mhs[1].hobi[1]="Tidur";
        mhs[1].hobi[2]="Bernafas";
	mhs[1].kps = kpsA;
        mhs[1].alamat.kota = "Kota Jakarta";
	
	cetakDataMhs(mhs[1]);

}
