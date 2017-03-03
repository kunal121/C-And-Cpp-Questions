#include<iostream>
using namespace std;
class complex
{
public:
int real,imag;
void input()
{
cin>>real>>imag;
}
complex add(complex c2)
{
complex c3;
c3.real=real+c2.real;
c3.imag=imag+c2.imag;
return c3;
}
complex sub(complex c2)
{
complex c3;
c3.real=real-c2.real;
c3.imag=imag-c2.imag;
return c3;
}
complex mul(complex c2)
{
complex c3;
c3.real=real*c2.real-imag*c2.imag;
c3.imag=imag*c2.real+c2.imag*real;
return c3;
}
complex div(complex c2)
{
complex c3;
c3.real=(real*c2.real+imag*c2.imag)/(c2.real*c2.real-c2.imag*c2.imag);
c3.imag=(imag*c2.real-c2.imag*real)/(c2.real*c2.real-c2.imag*c2.imag);
return c3;
}
void print(complex c3)
{
    if(c3.imag<0)
    {
        cout<<c3.real<<c3.imag<<"j"<<"\n";
    }
    else
    {
      cout<<c3.real<<"+j"<<c3.imag<<"\n";
    }

}
};
int main()
{
complex c1,c2,c3;
c1.input();
c2.input();
c3=c1.add(c2);
cout<<"add:";
c1.print(c3);
c3=c1.sub(c2);
cout<<"sub:";
c1.print(c3);
c3=c1.mul(c2);
cout<<"mul:";
c1.print(c3);
c3=c1.div(c2);
cout<<"div:";
c1.print(c3);
}

