// sağlamak için 1. fonksiyon adı aynı kalmak şartıyla parametre sayisi degistirilebilir
//2, fonksiyonun dönuş turu degistirilebilir
//3. parametrelirn sayısı değiştirilmeksizin türleri değiştirilebilir

#include <iostream>
using namespace std;
int mutlakDeger (int x1){
    if (x1<0)
    return x1*-1;
    else return x1;
}
void mutlakDeger (double x2){
    cout << "double girdiniz" << endl;
}
void mutlakDeger (float x3){
    cout << "float girdiniz" << endl;
}
void mutlakDeger (double x4,double x5){
    cout << "iki parametre girdiniz" << endl;
}
int main () {
    cout << mutlakDeger (-1) << endl;
     mutlakDeger (1.2);
     mutlakDeger (1.56f);
     mutlakDeger (5,5);
    return 0;
}



