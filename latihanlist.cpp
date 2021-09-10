#include <iostream>

using namespace std;

struct Member{
	string name;
	int score;

	Member *next;
};

Member *head, *tail, *cur, *newNode, *deleteNode;

void addFirstNode(string nama, int skor){
	newNode = new Member();
	newNode->name = nama;
	newNode->score = skor;
	newNode->next = head;
	head = newNode;
}

void addLastNode(string nama, int skor){
	newNode = new Member();
	newNode->name = nama;
	newNode->score = skor;
	newNode->next = NULL;
	tail->next = newNode;
	tail = newNode;
}

void addMember(){
	int n;
	cout << "Number of data: "; cin >> n;
	string nama[n];
	int score[n];
	for(int i=0;i<n;i++){
		cout << "Name: "; cin >> nama[i];
		cout << "Skor: "; cin >> score[i];
		addFirstNode(nama[i], score[i]);
	}
}

void showMember(){
	Member *cur;
	cur = head;
	while( cur!=NULL ){
		cout << "Name: " << cur->name << endl;
		cout << "Score: " << cur->score << endl;
		
		cur = cur->next;
	}
} 

int main(){
	addMember();
	showMember();
}
