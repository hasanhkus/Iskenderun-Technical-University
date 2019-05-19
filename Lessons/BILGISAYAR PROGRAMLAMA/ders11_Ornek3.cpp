#include <iostream>
using namespace std;

typedef struct telefon {
	char* ad;
	int number;
}TELEFON;

int main(){
	TELEFON t;
	t.ad = "ezgi";
	t.number = 123456;
	cout << "ad" << t.ad << endl;
	cout << "telefon"<< t.number << endl;
	return 0;
}