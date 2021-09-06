#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Number of data: "; cin >> n;
	string Name[n];
	int score[n];
	for (int i=0;i<n;i++){
		cout << "Name: "; cin >> Name[i];
		cout << "Score: "; cin >> score[i];
	}
	cout << "Your Data: " << endl;
	for (int i=0;i<n;i++){
		cout << "Name: " + Name[i] << endl;
		cout << "Score: "; cout << score[i] << endl;
	}
	return 0;
}
