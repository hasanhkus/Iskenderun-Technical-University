//kalıtım: class türetme örnekleri

#include <iostream>
using namespace std;

class Hayvan {
    public:
        Hayvan ();
        ~Hayvan ();
        int yasBelirle ();
    protected:
        int yasi;
        int agirlik;
    private:
        int korluk;
};

class kopek : public Hayvan {
    public:
        double gosterDeger ();
        kopek ();
};

class kangal : public kopek {

};

int main (){
    Hayvan h;
    kopek k;
    kangal tr;
    return 0;
}