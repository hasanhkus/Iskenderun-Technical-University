//türetilmiş classtan parent classtaki public fonksiyona erişim

#include <iostream>
using namespace std;

class sinifA {
            int degerA;

    public:
        int pub (){
            return degerA=567;
        }
};

class sinifB:public sinifA { 
            int b;
        public:
            int f1 (){
                return b=123;
            }
};

int main (){
    int aa,bb;
    sinifB objB;
    aa = objB.pub ();     //sinifB pub fonksiyonunu sinifA 'dan elde etti.(public olduğu için)
    bb = objB.f1 ();
    cout << "Temel siniftan gelen=";
    cout << aa << "\n";
        cout << "Turetilmis siniftan gelen=";
    cout << bb << "\n";
    return 0;
}