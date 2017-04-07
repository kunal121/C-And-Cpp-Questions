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
        Number::Number(int x)
    {
    num=x;
}
int Number::returnNumber()
    {
    return num;
}
class Square:public Number
{
    public:
        Square(int x):Number(x)
            {
            
        }
        int getSquare()
            {
            int t=returnNumber();
            int sqr=t*t;
            return sqr;
        }
};
class Cube:public Number
{
    public:
        Cube(int x):Number(x)
            {
            
        }
        int getCube()
            {
            int t=returnNumber();
            int cub=t*t*t;
            return cub;
        }
};
int main()
    {
    int n,sqr,cube;
    cin>>n;
    Square ob(n);
    Square *objS;
    objS=&ob;
    Cube ob1(n);
    Cube *objC;
    objC=&ob1;
       
        sqr =objS->getSquare();//objS is a pointer of Square class
        cout << "Square of "<< objS->returnNumber() << " is: " << sqr  << endl;    
        cube=objC->getCube();//objC is a pointer of Cube class
        cout << "Cube   of "<< objS->returnNumber() << " is: " << cube << endl;
}
