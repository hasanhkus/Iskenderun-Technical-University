//kalıtım ornek

#include <iostream>
using namespace std;

class sinifA {
    int degerA;
    public:
    int pub (){
        return degerA = 567;
    }
    protected:
    int pub2 (){
        return degerA = 111;
    }
};
class sinifB : public sinifA {
        int b;
    public:
        int f1 (){
            return b = 123;
        }
};

int main (){
    int aa,bb,cc,dd;
    sinifB objB;
    sinifA objA;
    aa = objB.pub();
    bb = objB.f1 ();
    cout << "Temel siniftan gelen= " << aa << "\n";
    cout << "Türetilmis siniftan gelen= " << bb << "\n";
}