/*kullan�c�dan 5 personel icin bilgileri al�n.
 daha sonra bu 5 personel bilgisinden emekli maaslar�n�n ortalamas�n� ve calisan maaslar�n�n ortalamas�n� ekrana 
yazan program� yaz�n
*/

#include <iostream>
using namespace std;

typedef enum durum {
calisiyor,emekli
}calismadurum;

typedef struct kisiler {
	string adsoyad;
	string meslek;
	calismadurum c;

union {
	double maas;
	double emeklimaas;
};

}kisi;


int main (){
kisi dizi [5];
double e = 0, m=0;
int esayac = 0, msayac = 0 ,temp;
for (int i=0;i < 5;++i){
	cout << "ad ve soyad� giriniz" << endl;
	cin >> dizi[i].	adsoyad;
	cout << "calisiyorsa 0,calismiyorsa 1 giriniz" << endl;
	cin >> temp ;
	if (temp == 0){
		dizi[i].c = calisiyor;
		cout << "maasi giriniz" << endl;
		cin >> dizi[i].maas;
		m = m+dizi [i].maas;
		msayac++;
	}
	else {
	dizi[i].c = emekli;
	cout << "maasi giriniz" << endl;
	cin >> dizi[i].emeklimaas;
	e = e + dizi [i].emeklimaas;
	esayac++;
		
	}
}
	cout << "maas ortalamas�: " << m / msayac << endl;
	cout << "emekli maas ortalamas�: " << e /esayac << endl;
	return 0;
}

