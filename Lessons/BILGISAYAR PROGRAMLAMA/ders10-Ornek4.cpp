#include <iostream>
#include <iostream>
using namespace std;

enum bolumler{
	programcilik = 1,
	donanim,
	muhasebe,
	motor, // e�er motora de�er yeni bir de�er atarsak geri kalanlar atanan de�erden 1 artarak devam eder.
	buro
}bolum;

main ()
{
	bolum = donanim;
	cout << "bolum :" << bolum << endl;
	cout << "Yeni bolum :" << bolum+2 << endl;
}
