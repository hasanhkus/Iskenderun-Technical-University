#include <iostream>
using namespace std;

class Canli {
public:
    Canli (){
        cout << "Ben bir canliyim" << endl;
    }
    int x;
};
class Memeli : public virtual Canli {
public:
    Memeli (){
        cout << "Ben bir memeliyim" << endl;
    }
};
class Balik : public virtual  Canli {
public:
    Balik () {
        cout << "Ben bir baligim" << endl;
    }
};

class Yunus : public Balik,Memeli {
    public:
    Yunus () {
        cout << "Ben bir yunusum" << endl;
    }
};

int main (){
    Yunus y;
}
