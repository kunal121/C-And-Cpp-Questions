#include<iostream>
using namespace std;
int sum(int a,int b);
float sum(float x,float y);
double sum(double s,double t);
int main()
{
    int a,b,c;
    float x,y,z;
    double s,t,u;
    sum(10,11);
//    sum(10,11.12);
    //sum(10.1,11.12);
    return 0;
}
int sum(int a,int b)
{
    cout<<"int"<<endl<<a+b;
}
float sum(float a,float b)
{
    cout<<"float"<<endl<<a+b;
}
double sum(double a,double b)
{
    cout<<"double"<<endl<<a+b;
}
