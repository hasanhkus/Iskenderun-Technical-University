#include <iostream>
#include <iostream>
using namespace std;

enum bolumler{
	programcilik = 1,
	donanim,
	muhasebe,
	motor, // eðer motora deðer yeni bir deðer atarsak geri kalanlar atanan deðerden 1 artarak devam eder.
	buro
}bolum;

main ()
{
	bolum = donanim;
	cout << "bolum :" << bolum << endl;
	cout << "Yeni bolum :" << bolum+2 << endl;
}
