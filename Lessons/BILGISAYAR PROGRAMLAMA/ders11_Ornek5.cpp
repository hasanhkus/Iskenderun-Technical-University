#include <iostream>
using namespace std;

enum hafta {pazartesi,sali,crs,prs,cuma,cts,pzr};

int main (){
	hafta bugun;
	bugun = pazartesi;
	cout << "gun " << bugun+1;
	return 0;
}
