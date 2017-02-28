#include<iostream>
using namespace std;
class COMPLEX
{
int real,img;
public:
void input()
        {
cout<<"Enter real and imaginary part of complex number : " ;
cin>>real>>img;

        }
friend void add(COMPLEX a,COMPLEX b);
};
void add(COMPLEX a,COMPLEX b)
{
a.real+=b.real;
a.img+=b.img;
if(b.img<0)
{
  cout<<a.real<<a.img<<"i";
}
cout<<a.real<<" + "<<a.img<<"i";
}

int main()
{
COMPLEX a,b;
a.input();
b.input();
add(a,b);

}

