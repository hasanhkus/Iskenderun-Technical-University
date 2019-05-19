//kalıtım ornek

#include <iostream>
using namespace std;

class Sekil {
 public:
    double merkez = 0;
    void tasi (){
        cout << "tasi tetiklendi";
    }
    void buyut (){
        cout << "buyut tetiklendi";
    }
    void goster (){
        cout << "goster tetiklendi";
    }
};
class Dikdortgen: public Sekil {
    public:
    double  kose;
};
class Cember : public Sekil {
    public:
    double yaricap;
};
class Cokgen: public Sekil {
    public:
    double noktalar;
    void goster () {
        cout << "turetilmis goster tetiklendi"; //override yapıldı
    }
};

int main (){
    Dikdortgen dortkenar;
    dortkenar.tasi();
    return 0;
}