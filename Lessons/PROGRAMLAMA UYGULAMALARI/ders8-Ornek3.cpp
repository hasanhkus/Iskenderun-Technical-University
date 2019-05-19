// türetilmiş sınıfta ilk önce base constructor çağrılır,bunun örneği
//destructorda tam tersi.önce türetilmiş destructor sonra base destructor
#include <iostream>
using namespace std;

class Base {
    int x;
    public:
        Base (){
            cout << "Base constructor" << endl;
        }
};
class Derived : public Base {
    int y;
    public:
     Derived (){
         cout << "Derived constructor" << endl;
     }
     Derived (int i){
         cout << "Derived Parametrized constructor" << endl;
     }
};

int main (){
    Base b;
    Derived d1;
    Derived d2 (10);
}