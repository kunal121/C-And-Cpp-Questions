#include<iostream>
using namespace std;
template<class T>
    T GetAverage(T a[],int n){
    int i;
    T sum=0;
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
    }
    T b=sum/n;
    return b;
}
template<class T>
    T GetMinimum(T a[],int n){
    int i;
    T min=a[0];
    for(i=1;i<n;i++){
        if(min>a[i])
            min=a[i];
    }
    return min;
}
template<class T>
    T GetMaximum(T a[],int n){
   T min=a[0];
    for(int i=1;i<n;i++){
        if(min<a[i])
            min=a[i];
    }
    return min;
}
int main()
{
    int  IntArray[50];
    float FloatArray[50];
    int option;
    int n1,n2;
    cin>>n1>>n2;
    cin>>option;
    for(int i=0;i<n1;i++)
    cin>>IntArray[i];
    for(int j=0;j<n2;j++)
    cin>>FloatArray[j];
    if(option==1)
    {
    cout << GetAverage(IntArray,n1)<<endl;
    cout << GetAverage(FloatArray,n2)<<endl;
    }
    else if(option==2)
    {
        cout<<GetMinimum(IntArray,n1)<<endl;
            cout<<GetMinimum(FloatArray,n2)<<endl;
    }
    else if(option==3)
    {
        cout<<GetMaximum(IntArray,n1)<<endl;
            cout<<GetMaximum(FloatArray,n2)<<endl;
    }
    else
    {
        cout<<"Please select the correct option";
    }
    return 0;
}
