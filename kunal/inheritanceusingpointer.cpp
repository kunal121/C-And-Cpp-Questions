#include <iostream>

using namespace std;

class Area_Figure
{
protected:
double dSide;
public:
Area_Figure(double a){dSide=a;};
    virtual       ~Area_Figure(){};
double  Surface()
    {
        return dSide*dSide;
    }
    double Circumference()
    {
        return 4.0*dSide;
    }
};
class CSquare:public Area_Figure{
  public:
    CSquare(double s1):Area_Figure(s1)
    {
        Surface();
        Circumference();
    }



};
int main()
{
    double s1,s2;
    cin>>s1>>s2;
CSquare Square_1(s1);

cout<<"Surface="
    <<Square_1.Surface()<<endl
    <<"Circumference="
    <<Square_1.Circumference()<<endl;

Area_Figure* ptrFigure = new CSquare(s2);
cout<<"Surface="
    <<ptrFigure->Surface()<<endl
    <<"Circumference="
    <<ptrFigure->Circumference()<<endl;

delete ptrFigure;

return 0;
}
