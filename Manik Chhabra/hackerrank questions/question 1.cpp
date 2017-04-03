#include <iostream>
using namespace std;
int size;
class sample
    {
    
    public:
    long int *arr;
   friend sample operator +(sample ,sample);
   sample()
{
    int i;
    for(i=0;i<5;i++)
        {
        cin>>arr[i];
    }
}    
};
sample operator +(sample ob1,sample ob2)
    {
    	int i;
    sample temp;
    for(i=0;i<size;i++)
        {
        temp.arr[i]=ob1.arr[i]+ob2.arr[i];
    }
    for(i=0;i<size;i++)
        {
        if(temp.arr[i]>100)
            {
            temp.arr[i]=temp.arr[i]-100;
        }
    }
    return temp;
}    
int main() {
    cin>>size;
    sample a1,a2,a3;
    a3=a1+a2;
    return 0;
}



