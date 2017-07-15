#include <iostream>
using namespace std;


template<class t>
    void read(t *arr)
    {
    for(int i=0;i<5;i++)
        cin>>arr[i];
}
template<class t>
    t value(t *arr,int n)
    {
    t sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}

int main()
{
	float Array[5];
	int position;
	read(Array);
	cin>>position;
	cout<<"sum upto "<<position<<" is "<<value(Array,position);
	return 0;
}
