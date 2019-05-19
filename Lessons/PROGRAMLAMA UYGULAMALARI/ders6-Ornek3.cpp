// operatörlerin aşırı yüklenmesi örneği
#include <iostream>
using namespace std;
class Box {
    public:
    double getVolume (){
        return length*height*breadth;
    }
    void setLength (double len){
        length=len;
    }
    void setBreadth (double bre){
        breadth = bre;
    }
    void setHeight (double hei){
        height = hei;
    }
    Box operator + (Box&b){
        Box box;
        box.length = this-> length+b.length;
        box.height=this->height+b.height;
        box.breadth=this->breadth+b.breadth;
        return box;
    }
    private:
     double length;
    double height;
    double breadth;
};
int main (){
Box Box1, Box2,Box3;
double volume = 0.0;
Box1.setLength (6.0);
Box1.setBreadth (7.0);
Box1.setHeight (5.0);
Box2.setLength (12.0);
Box2.setBreadth (13.0);
Box2.setHeight (10.0);
Box3=Box1+Box2;
cout << "volume of box 3:" <<Box3.getVolume();
}