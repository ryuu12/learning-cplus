#include <iostream>
using namespace std;

class Car {
	
	public:
	string Name;	
	int speed;

	public:
	void details(){
		cout << "Name: " + Name << endl;
		cout << "Speed: "; cout << speed << endl;;		
	}
};

int main(){
	
	Car mersedes;
	mersedes.Name = "Mobil Ku";
	mersedes.speed = 200;
	mersedes.details();
	return 0;
}
