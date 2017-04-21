#include<iostream>
using namespace std;
class abc
{
int a,b,c;
public:
friend istream& operator >>(istream &ob,abc &abcob)
{
ob>>abcob.a;
ob>>abcob.b;
ob>>abcob.c;
return ob;
}
friend ostream& operator <<(ostream &ob,abc &abcob)
{
ob<<abcob.a;
ob<<abcob.b;
ob<<abcob.c;
return ob;
}
};
int main()
{
abc df;
cin>>df;
cout<<df;
return 0;
}
