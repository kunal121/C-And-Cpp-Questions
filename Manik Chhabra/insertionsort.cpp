using namespace std;
#include<iostream>
int main()
{
	int a[100],k,ptr,n,i,temp;
	cout<<"Enter the no. of elements in array"<<endl;
	cin>>n;
	cout<<"Enter array elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(k=1;k<n;k++)
	{
		temp=a[k];
		ptr=k-1;
		while(temp<a[ptr] && ptr>=0)
		{
			a[ptr+1]=a[ptr];
			ptr--;
		}
		a[ptr+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
