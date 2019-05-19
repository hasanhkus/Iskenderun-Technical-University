#include <iostream>
using namespace std;

union kayit{
	char k;
	int x;
	double y;
};
int main ()
{
	kayit z;
	z.k='A';
	z.x=12;
	z.y=15000;
	cout << "z-->k:" << z.k << endl;
	cout << "z-->x:" << z.x << endl;
	cout << "z-->y:" << z.y << endl;
	
}
