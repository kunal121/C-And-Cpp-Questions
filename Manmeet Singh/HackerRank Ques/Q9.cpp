#include <iostream>
#include <string.h>

using namespace std;
class Shape
{
    protected:
       float l;
    public:
       void getData();
       virtual float calculateArea() = 0;
};
void Shape::getData(){
    cin>>l;
}
class Square:public Shape {
public:
    float calculateArea(){
        return l*l;
    }
};
class Circle:public Shape
{
public:
    float calculateArea(){
        return 3.14*l*l;
    }
};

int main()
{
    Shape *o ;
    Shape *o1;
    Square s;
    Circle c;
    o = &s;
    o1 = &c;
    o->getData();
    o1->getData();
cout<<"Area of square: " << o->calculateArea();
cout << "\nArea of circle: " << o1->calculateArea(); //o and o1 are pointer of Shape class

    return 0;
}
