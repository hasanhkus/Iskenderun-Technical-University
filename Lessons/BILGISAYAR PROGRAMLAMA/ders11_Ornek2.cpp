#include <iostream>
using namespace std;

struct kisi {
	char adi [50];
	int yasi;
	float maas;
};

int main (){
	kisi p[3];
	for (int i =0;i<=2;i++){
	kisi p[i];
	cout << "kisi adi girin" << endl;
	cin >> p[i].adi;
	cout << "yasi girin"<< endl;
	cin>> p[i].yasi;
	cout << "maas girin"<< endl;
	cin >> p[i].maas;
	cout << "kisi bilgisi goruntuleniyor" << endl;
	cout << "adi :" << p[i].adi << endl;
	cout << "yasi :" << p[i].yasi << endl;
	cout << "maas :" << p[i].maas << endl;
	}
	return 0;
}
	
