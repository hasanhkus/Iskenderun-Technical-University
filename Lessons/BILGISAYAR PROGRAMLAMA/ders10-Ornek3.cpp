#include <iostream>
#include <cstring>
using namespace std;

struct A{
	int a;
	char b[2];
};
struct B{
	
};

int main()
{
	struct A x;
	x.a=15;
	x.b[0]='a';
	x.b[1]='b';
	x.b[2]='l';
	
	cout << "a degeri : "<<x.a<< endl;
	cout << "b degeri : "<<x.b[2]<< endl;
	cout << "a boyutu : " << sizeof(A)<< endl;
	cout << "bos B boyutu : " << sizeof(B)<< endl;
}


