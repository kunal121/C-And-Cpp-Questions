#include<iostream>
#include<string.h>
using namespace std;
template<class Type>
class Array
{
  Type *arr;
  int size;
  public:
 Array(int a)
    {
    size=a;
    arr=new Type[a];
}
void read(){
    int i;
    for(i=0;i<size;i++)
        cin>>arr[i];
}
void add(Array <int> C){
    int sum=0;
    for(int i=0;i<size;i++)
        {
        sum=arr[i]+C.arr[i];
          cout<<sum<<" ";
    }

}
void sub(Array <int> C){
    int sum=0;
    for(int i=0;i<size;i++)
        {
        sum=C.arr[i]-arr[0];
          cout<<sum<<" ";
    }
}
};
int main()
{
   Array <int> A(5);
   A.read();//elements of integer array
   Array<int> B(5);
   B.read();//elements of character array
   A.add(B);
   cout<<"\n";
   A.sub(B);
}
