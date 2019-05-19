#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;
int main()
{
    string test = "189542";
    int myint = stoi(test);
    cout << myint << '\n';
    myint=50;
    test=to_string(myint);
    cout<<test;

    string has = "hasan";
    string bah = "bahadir";
    
    has.swap (bah);
    cout << has << endl << bah << endl;
    
    has.replace (1,3,"ooo"); // birinci indis,2.uzunluk,3. metin,4. ve 5 metini seçme
    cout << has << endl;
    char o[]="zeynep"; //cstring
    char p[]="su";
    
    strcpy (o,p);
    cout << o << endl;

    strcat (o,p);
    cout << o << endl;
    
    int uuu;
    srand (time (NULL));//<ctime>
    uuu=90+ rand ()%10;  
  cout << uuu << endl;

  string ggg ="hasan         ";
 cout << ggg.size()<<endl;   //uzunluk
 cout << ggg.length()<<endl;  //uzunluk
 cout << ggg.capacity ()<< endl; // indis
 cout << ggg.max_size ()<< endl; 

// string replace
string isimm ="hasan kus";
isimm.replace(0,5,"hasan huseyin",6,7); //(baslangıç indisi,kaç tane silinecek,yazılacak metin
                                        //,--burası opsiyonel-- metinin kaçıncı indisinden başlayacak,kaç harf yazılacak)
cout << endl << isimm;
}
  
