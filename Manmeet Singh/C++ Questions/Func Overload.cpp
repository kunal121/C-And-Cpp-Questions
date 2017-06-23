#include<iostream>
using namespace std;
void add(int x,int y)
{
cout<<x+y<<endl;
}

void add(float x,float y)
{
cout<<x+y<<endl;
}

void add(int x,float y)
{
cout<<x+y<<endl;
}


int main()
{
int a=1,b=2;
float c=0.1,d=5.2;
add(a,b);
add(c,d);
add(a,c);
} 
