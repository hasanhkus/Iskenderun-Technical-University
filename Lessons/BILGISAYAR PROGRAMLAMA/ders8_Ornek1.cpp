//türetilmiş siniftan nesne oluşturulunca herzaman ilk önce temel sinif kurucu fonksiyonu çalışır.
//yıkıcıda ise bunun tersi olur.ilk önce türetilmis nesne yıkıcısı sonra temel sinif yıkıcısı çalışır.

#include <iostream>
using namespace std;

class A {
    public:
        A(){
            cout << "temel sinif kurucusu tetiklendi" << endl;
        }
};
class B : public A {
    public:
        B(){
            cout << "türetilmis sinif kurucusu tetiklendi" << endl;
        }
};
int main (){
    A nesne;
    B nesne2;
    return 0;
}