#include <iostream>
using namespace std;

struct kisi {
	char adi [50];
	int yasi;
	float maas;
};

int main (){
	kisi p1;
	cout << "kisi adi girin" << endl;
	cin.get (p1.adi,50);
	cout << "yasi girin"<< endl;
	cin>> p1.yasi;
	cout << "maas girin"<< endl;
	cin >> p1.maas;
	cout << "kisi bilgisi goruntuleniyor" << endl;
	cout << "adi :" << p1.adi << endl;
	cout << "yasi :" << p1.yasi << endl;
	cout << "maas :" << p1.maas << endl;
	return 0;
}
	