#include <iostream>
using namespace std;

class A{
	int degerA;
	public :
		int f1(){
			return degerA=567;
		}
};
class B : virtual public A
{
	int degerB;
	public :
		int f2(){
			return degerB=888;
		}
};
class C : virtual public A
{1
	int degerB;
	public :
		int f3()
		{
			return degerB=333;
		}
};
class D :public B,public C{
int b;
public:
int f4()
{return b=123;
	}	
};
int main()
{
	int aa,bb,cc,dd;
	D objD;
	aa = objD.f1();
	bb = objD.f2();
	cc = objD.f3();
	dd = objD.f4();
	
	cout << "temel siniftan gelen =";
	cout << aa << "\n";
	cout << "1. turetilmis siniftan gelen=";
	cout << bb << "\n";
	cout << "2. turetilmis siniftan gelen=";
	cout << cc << "\n";
	cout << "3. turetilmis siniftan gelen="; 
	cout << dd << "\n";
	
}
