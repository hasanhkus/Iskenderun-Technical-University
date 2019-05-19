// ad soyad,sinav1,sinav2,ortalama değişkenleri olan ve sinav1,sinav2 ile ortalamayı hesaplayıp ekrana yazdıran class yazınız
#include <iostream>
#include <string>
using namespace std;
class Ogrenci {
    double ortalama;
    public:
        string adsoyad;
        int sinav1,sinav2;
        Ogrenci (){
        }
        void ortalamaHesapla(){
            ortalama = 0.4*sinav1 + sinav2*0.6;
        }
        void yazdir () { cout << adsoyad << " " << sinav1 << " " << sinav2 << " " << ortalama << endl;}
};
int main (){
    Ogrenci dizi [5];       //nesne dizisi
    for (int i=0;i<5;i++) {     //dizi elemanlarına değişken atamaları yapılıyor.
        cout << "Ad soyad, vize final giriniz" << endl;
        cin >> dizi [i].adsoyad;
        cin >> dizi [i].sinav1 >> dizi [i].sinav2;
    }
    for (int i=0;i<5;i++) {
        dizi [i].ortalamaHesapla();
        dizi [i].yazdir();
    }
    Ogrenci ali;                    //tek elemanlı deneme
    ali.adsoyad="alican";
    ali.sinav1=40;
    ali.sinav2=80;
    ali.ortalamaHesapla();
    ali.yazdir ();
    return 0;
}