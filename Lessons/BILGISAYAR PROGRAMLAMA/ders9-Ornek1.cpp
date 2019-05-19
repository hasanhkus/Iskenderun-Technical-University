#include <iostream>
using namespace std;

class Ucak {
    private:
        bool ucusDurumu;
    public:
        void Hesapla (double Kutle) {
        Kutle = 2*Kutle;
        cout << Kutle << endl;
    }
    public:
    double Tork;
    double Kutle=5;


   void havalan (){
       ucusDurumu = true;
       cout << ucusDurumu << endl;
   }
   void inisYap (){
       ucusDurumu = false;
       cout << ucusDurumu << endl;
   }
};

class Arazi {
    private:
        double Surtunme;
        double kutle=10;
        public:
        double Kutle;
    void Hesapla (double Kutle){
        Kutle = 3*Kutle;
        cout << Kutle << endl;
    }
    void Hizlan () {
        cout << "hizlan tetiklendi" << endl;
    } 

};

class robot : public Ucak,public Arazi {
    public:
    double Tork = Ucak::Kutle;
};

int main (){
    robot ali;
    ali.Ucak::Hesapla(5);     //fonksiyonu hangi klastan aldığını nesne.klas::fonksiyon ile belirliyoruz
    ali.Arazi::Hesapla(5);
    ali.Hizlan();
    ali.inisYap();
}
