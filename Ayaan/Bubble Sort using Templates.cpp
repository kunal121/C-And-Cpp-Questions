#include<iostream>
using namespace std;
template<class A>
class bubble
{
	public:
		int size;
		A arr[100];
		void get();
	    void sort();
		void display();
};
template<class A>
void bubble<A>::get()
{
	cout<<"Enter size of array "<<endl;
	cin>>size;
	cout<<"Enter elements "<<endl;
	for(int i=0;i<size;i++)
	    cin>>arr[i];
}
template<class A>
void bubble<A>::sort()
{
	int i,j;
	A temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
template<class A>
void bubble<A>::display()
{
	cout<<"Sorted array :::"<<endl;
	for(int i=0;i<size;i++)
		cout<<arr[i]<<"\t";
	cout<<"\n\n";
}
int main()
{
	bubble <int> b;
	bubble <float> b1;
	bubble <char> b2;
	cout<<"INTEGERS::"<<endl;
	b.get();
	b.sort();
	b.display();
	cout<<"FLOATING POINT NUMBERS::"<<endl;
	b1.get();
	b1.sort();
	b1.display();
	cout<<"CHARACTERS::"<<endl;
	b2.get();
	b2.sort();
	b2.display();
}
