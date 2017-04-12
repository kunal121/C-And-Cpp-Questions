#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
   try{
       cout<<"enter number 1"<<"\n";
       cin>>num1;
       cout<<"enter number 2"<<"\n";

       cin>>num2;
       if(num2==0)
       {
         throw 0;
       }
       cout<<num1/num2;
   }
   catch(...){
     cout<<"there is an error";
   }
}
