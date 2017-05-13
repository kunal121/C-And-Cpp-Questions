#include <iostream>
using namespace std;
template<class T>
void bubble(T *a,int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1-i;j++)
            {
            if(a[j+1]<a[j]){
                T temp;
                temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }

}
int main()
{
	int x[5];
	float y[5];
	for(int i=0;i<5;i++)
	{cin>>x[i];}
	for(int i=0;i<5;i++)
	{cin>>y[i];}
	bubble(x,5);
	bubble(y,5);
	for(int i=0;i<5;i++)
	{cout<<x[i]<<" ";}
	cout<<endl;
	for(int i=0;i<5;i++)
	{cout<<y[i]<<" ";}
	return 0;
}


