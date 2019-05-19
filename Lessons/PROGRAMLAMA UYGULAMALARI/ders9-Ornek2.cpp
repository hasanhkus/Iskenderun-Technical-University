#include <iostream>
using namespace std;

class Daire {
private:
    int c;
protected:
    const double pi = 3.14;
public:
    double yaricap;
    Daire (double r) {
        yaricap = r;
    }
    double getAlan(){
        return pi*yaricap*yaricap;
    }
    double getCevre(){
        return 2*pi*yaricap;
    }
};

class Silindir : private Daire {
public:
    double yukseklik;
    Silindir (double h,double r) : Daire (r){ // aynı anda hem silindir hem de daire constructorunu çalıştırıyor
        yukseklik = h;
    }
    double getYuzeyAlan(){
        return 2*getAlan()+getCevre()*yukseklik;  //alt ve üst yüzey alanı toplamı + yan yüzey alanı toplamı 
    }
    double getHacim (){
        return getAlan()*yukseklik;
    }   
};

int main (){
    Silindir s (3,5);
    cout << s.getHacim () << endl;
    cout << s.getYuzeyAlan () << endl;
}