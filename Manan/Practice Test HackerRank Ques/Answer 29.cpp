#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a, T &b);//for swapping tow integers

template <typename T>
void mySwap(T *a, T *b,  const int n); //for swapping two arrays

void Show(int a[]);//to display contents of array

const int Lim = 8;//size of the array

template <typename T>
void mySwap(T &a,T &b)
    {
    int temp;
    temp=a;
    a=b;
    b=temp;
}
template <typename T>
void mySwap(T *a,T *b, const int n)
    {
    int t;
    for(int i=0;i<n;i++)
        {
        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}
void Show(int a[])
    {
    for(int i=0;i<Lim;i++){
        cout<<a[i];
        if(i==1 || i==3)
            cout<<"/";
    }
    cout<<endl;
}
int main()
{
	 int i,j;
	 cin >>i>>j;
	 mySwap(i,j);
	 cout <<i <<" "<<j<<endl;
	 int d1[Lim],d2[Lim];
	 for(int i=0;i<Lim;i++)
	    cin>>d1[i];

	 for(int i=0;i<Lim;i++)
	    cin>>d2[i];

	 mySwap(d1,d2,Lim);
	 Show(d1);
	 Show(d2);

	 return 0;
}
