#include <iostream>
#include <string>
using namespace std;


typedef enum DovizTipiEnum { Lira,Dolar,Euro}DovizTipi;
typedef struct HesapYapisi{
	double bakiye = 0;
	string son5islem [5];
	DovizTipi tip;
} Hesap;

class Kisi {
	Hesap h;
	void islemEkle (string s){
		for (int i=3 ;i>=0;i--) h.son5islem [i+1] = h.son5islem [i];
		h.son5islem [0]=s;
	}
	string sonislem;
	public:
		string adsoyad;
		Kisi (){
			h.tip = Lira;
		}
		void son5islemGor(){
		for	(int i = 0;i < 5;i++)
			cout << i << " . " << h.son5islem [i] << endl;
		}
		void setHesapTipi (DovizTipi t){
		h.tip = t;}
		void paraYatir (double miktar){
			h.bakiye += miktar;
			cout << miktar << " yatirildi." << endl;
			sonislem = to_string (miktar) + " yatirildi";
			islemEkle(sonislem);
		}
		
				void paraCek (double miktar){
			if (h.bakiye >=miktar){
			h.bakiye -= miktar;
			cout << miktar << " cekildi." << endl;
			sonislem = to_string(miktar) + " cekildi";
			islemEkle(sonislem);}
			else 
			{
				cout << " bakiye yetersiz." << endl;
				islemEkle (to_string(miktar)+ " para cekilemedi.Bakiye yetersiz.");
			}
		}
		void bakiyeGoster (){
			cout << " bakiyeniz." << h.bakiye << endl;
			islemEkle ("Bakiye Sorgulandi.");
		}
		};
		
		int main (){
			Kisi k;
			k.paraYatir (200);
			k.paraCek (300);
			k.bakiyeGoster();
			k.paraCek (100);
			k.bakiyeGoster();
			k.son5islemGor();
		}