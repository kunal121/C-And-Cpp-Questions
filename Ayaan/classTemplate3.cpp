#include<iostream>
using namespace std;

template <class T>
void display(T a){
cout<<"In Template display "<<a;
}
template<class T,class T1>
void display(T a,T1 b)
{
    cout<<"In template display"<<a<<"\t/t"<<b;
}
void display(int a){
cout<<"In displaying display "<<a;
}

main(){
display(3);
display(4.5);
display(2,3);
display('a');
}
