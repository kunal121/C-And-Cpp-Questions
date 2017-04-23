#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class Array
{
	int *arr,size;
	public:
		class Error{};//empty class at this moment
		Array(int n)//constructor
		{
			size=n;
			arr=new int[size];
		}
		void read()
		{
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		void display()
		{
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<"\t";
				cout<<endl;
			}
		}
		int &operator[](int index)
		{
			if(index<0 || index>=size)
			{
				throw Error();//constructor call object created implicitly 
			}
			else
			return arr[index];
		}
		
};

int main()
{
	int n;
	cout<<"enter size of array";
	cin>>n;
	Array A(n);
	cout<<"enter elements";
	A.read();
	cout<<"entered array \n";
	A.display();
	
	try
	{
		A[2]=20; //A.op[](i);
		A.display();
		A[-1]=30;
		A.display();
		A[6]=40;		
		A.display();		
	}
	
	catch(Array::Error)
	{
		cout<<"out of bound exception \n";
	}
	cout<<"exit main";
	return 0;
}
