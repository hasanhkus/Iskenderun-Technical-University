#include <iostream>
using namespace std;

class Zaman {
    int saat,dakika,saniye;
    public:
    Zaman (){
        saat = 0,dakika = 0,saniye = 0;
    }
    Zaman (int s,int d, int sn){
        saat = s;dakika=d; saniye=sn;
    }
    void yazdir (){
        cout << saat << ":" << dakika << ":" << saniye << endl;
    }
    void ekleSaniye (int sn){
        saniye += sn; int dk = saniye/60; saniye = saniye %60;
        ekleDakika(dk);
    }
    void ekleDakika(int dk) {
        dakika = dk; int s=dakika/60; dakika = dakika %60;
        ekleSaat (s);
    }
    void ekleSaat (int s) { saat += s; saat = saat %24;}
};
int main () {
    Zaman x (15,20,30);
    x.yazdir();
    x.ekleSaniye (1000);
    x.yazdir();
    return 0;
}
