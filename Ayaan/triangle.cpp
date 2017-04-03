#include<iostream>
#include<math.h>
using namespace std;
void are(int a,int b,int c,float& ar,float& per);
int main()
{
    int a,b,c;
    float x,y;
    cout<<"enter 3 sides"<<endl;
    cin>>a>>b>>c;
    are(a,b,c,x,y);
    cout<<x<<endl;
    cout<<y;
    return 0;
}

void are(int a,int b,int c,float& area,float& peri)
{
    peri=a+b+c;
    float p=peri/2;
    float ar;
    ar=p*(peri-a)*(peri-b)*(peri-c);
    area=pow(ar,0.5);
}
