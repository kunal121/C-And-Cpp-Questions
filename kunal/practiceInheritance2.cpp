
#include <string>

#include <iostream>

using namespace std;
class Shape
{
    protected:
       float l;
    public:
       void getData();
       virtual float calculateArea() = 0;
};

void Shape::getData()
{
    cin>>l;
}
class Square:public Shape
{


    public:
    float area;
    float calculateArea()
    {
        area=l*l;
        return area;
    }
};
class Circle:public Shape
{
    public:
    float area1;
    float calculateArea()
    {
        area1=3.14*l*l;
        return area1;

    }
    };
int main()
{
Shape *o,*o1;
Square a;
Circle b;
o=&a;
o1=&b;
o->getData();
o1->getData();
    cout<<"Area of square: " << o->calculateArea();
cout << "\nArea of circle: " << o1->calculateArea(); //o and o1 are pointer of Shape class

    return 0;
}
