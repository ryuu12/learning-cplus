#include <iostream>

using namespace std;

struct Buku{
	
	string judul, pengarang;
	int terbit;
	
	Buku *next;

};

Buku *head, *tail, *cur, *newNode, *deleteNode;

void createSingleLinkedList(string judul, string pengarang, int tahun){
	head = new Buku();
	head->judul = judul;
	head->pengarang = pengarang;
	head->terbit = tahun;
	head->next = NULL;
	tail = head;
}

void addFirst(string judul, string pengarang, int tahun){
	newNode = new Buku();
	newNode->judul = judul;
	newNode->pengarang = pengarang;
	newNode->terbit = tahun;
	newNode->next = head;
	head = newNode;
}

void addLast(string judul, string pengarang, int tahun){
	newNode = new Buku();
	newNode->judul = judul;
	newNode->pengarang = pengarang;
	newNode->terbit = tahun;
	newNode->next = NULL;
	tail->next = newNode;
	tail = newNode;
}

void purgeFirst(){
	deleteNode = head;
	head = head->next;
	delete deleteNode;
}

void purgeLast(){
	deleteNode = tail;
	cur = head;
	while( cur->next != tail ){
		cur = cur->next;
	}
	tail = cur;
	tail->next = NULL;
	delete deleteNode;
}

void ubahFirst(string judul, string pengarang, int tahun) {
	head->judul = judul;
	head->pengarang = pengarang;
	head->terbit = tahun;
}

void ubahLast(string judul, string pengarang, int tahun) {
	tail->judul = judul;
	tail->pengarang = pengarang;
	tail->terbit = tahun;
}

void printSingleLinkedList(){
	Buku *cur;
	cur = head;
	while( cur !=NULL ){
		cout << "Judul Buku: " << cur->judul << endl;
		cout << "Pengarang Buku: " << cur->pengarang << endl;
		cout << "Tahun Buku: " << cur->terbit << endl;

		cur = cur->next;
	}
}

int main(){
	
	createSingleLinkedList("Bahasa","Ahli Bahasa",2001);
	
	printSingleLinkedList();

	cout << "\n" << endl;

	addFirst("Matematika", "Ahli Matematika", 2002);
	printSingleLinkedList();

	cout << "\n" << endl;
	
	addLast("Fisika", "Ahli Fisika", 2010);
	printSingleLinkedList();

	cout << "\n" << endl;
	
	purgeFirst();
	printSingleLinkedList();
	
	cout << "\n" << endl;
	addLast("Kalkulus", "Ahli Kalkulus", 2012);
	printSingleLinkedList();
	
	cout << "\n" << endl;
	purgeLast();
	printSingleLinkedList();

	cout << "\n" << endl;
	ubahFirst("Overlord","Maruyama",2012);
	printSingleLinkedList();

}
