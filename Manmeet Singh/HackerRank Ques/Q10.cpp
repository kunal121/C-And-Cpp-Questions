#include <iostream>
using namespace std;
class Square;
class Cube;
class Number
{
private:
    int num;
public:
    Number(int x);
    int returnNumber();
};

Number::Number(int x){
    num = x;
}
int Number::returnNumber(){
    return num;
}
class Square:public Number{
public:
    Square(int x):Number(x)
    {}
    int getSquare()
    {
        int num = returnNumber();
        return num*num;
    }
};
class Cube:public Number{
public:
    Cube(int x):Number(x)
    {}
    int getCube(){
        int num = returnNumber();
        return num*num*num;
    }
};
int main(){
    int sqr,cube;
    int num;
    cin>>num;
    Square *objS,s(num);
    Cube *objC,c(num);
    objS = &s;
    objC = &c;

    sqr =objS->getSquare();//objS is a pointer of Square class
    cout << "Square of "<< objS->returnNumber() << " is: " << sqr  << endl;
    cube=objC->getCube();//objC is a pointer of Cube class
    cout << "Cube   of "<< objS->returnNumber() << " is: " << cube << endl;
}
