//public deðiþkenlerin miras alýnmasý ve deðiþtirilmesi

#include <iostream>
using namespace std;

class vasita {
public:
	int tekersayisi;
	double maxHiz;
	void yazdir() {
		cout << tekersayisi << " tekerli " << maxHiz << " hizinda vasita " << endl;
	}
};
class Araba :public vasita {
	public:
	Araba() {
		tekersayisi = 4; maxHiz = 220;
	}
};
class Bisiklet :public vasita {
public:
	Bisiklet() {
		tekersayisi = 2; maxHiz = 40;
	}
};

int main() {
	Bisiklet b; Araba a;
	a.yazdir();
	b.yazdir();
}
