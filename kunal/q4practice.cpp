
#include <sstream>
#include <iostream>

using namespace std;
class Square;
class Cube;
class Number
{    private:
        int num;
    public:
        Number(int x);
        int returnNumber();
        };
int Number::returnNumber()
{
    return num;
}
Number::Number(int x)
{
    num=x;
}
class Square:public Number
{
    protected:
    int num;
    public:
    Square(int x):Number(x)
    {

    }
    int getSquare()
    {
        num=returnNumber();
        return num*num;
    }

};
class Cube:public Number
{
    protected:
    int num;
    public:
    Cube(int x):Number(x)
    {
    }
    int getCube()
    {
        num=returnNumber();
        return num*num*num;
    }
};
int main()
{

        int num,sqr,cube;
        cin>>num;
        Square *objS;
        Cube *objC;
        Square o1(num);
        Cube o2(num);
        objS=&o1;
        objC=&o2;

        //sqr and cube are integer variables.
        sqr =objS->getSquare();//objS is a pointer of Square class
        cout << "Square of "<< objS->returnNumber() << " is: " << sqr  << endl;
        cube=objC->getCube();//objC is a pointer of Cube class
        cout << "Cube   of "<< objS->returnNumber() << " is: " << cube << endl;
}
