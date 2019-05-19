#include <iostream>
#include <cmath>
using namespace std;

int main (){
    //trigonometri

    cout << sin (1.57) << endl;
    cout << cos (1.57) << endl;
    cout << tan (1.57) << endl;
    
    //mutlak değer float
    cout << fabs (-5) << endl;

    //taban tavan yuvarlama
   cout <<  floor (6.9) << endl;
   cout << ceil (6.9) << endl;
   cout << round (9.38) << endl;

   cout << exp (4)<<endl; // e^4
  cout << log10 (100)<< endl; // 10 tabanında log
  cout << log (100) << endl;

cout << pow (5,2) << endl; // üst
cout << abs (-7) << endl; //mutlak değer
cout << sqrt (25) << endl; //kök
cout << cbrt (1000) << endl;//küp kök. cubicroot
cout << hypot (5,12) << endl; // hipotenüs
cout << isfinite (111/3) << endl; //sonlu mu? sonluysa true
cout << isinf (111/3) << endl; //sonsuz mu sonsuz? sonsuzsa true


}