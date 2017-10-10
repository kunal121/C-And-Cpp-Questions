#include<iostream>
using namespace std;
int main()
{
    int d=0,n,i,j,tofind;
    int ranks[100],marks[100],ans[100];
    cout<<"no of elements"<<endl;
cin>>n;
cout<<"sum"<<endl;
cin>>tofind;
cout<<"enter elements"<<endl;
for(i=0;i<n;i++){
    cin>>marks[i];
}


for(i=0;i<n;i++)
{
for(j=i+1;j<n-1 ;j++)
{
    if((marks[i]+marks[j])==tofind)
    {
       // d=1;
cout<<marks[i]<<" "<<marks[j]<<endl;

}

}

}


}
