//fonksiyonların aşırı yüklenmesi
#include <iostream>
using namespace std;
void print (int i)
{
    cout << "Bu int" << i << endl;
}
void print (double f){
    cout << "Bu float " << f << endl;
}
void print (char c){
    cout << "Bu char " << c << endl;
}
int main (){
    print (10);
    print (10.10);
    print ('y'); 
}
