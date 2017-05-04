#include <iostream>
using namespace std;
template <class B>
void bubbleSort (B arr[],B n)
{	for (int i = 0; i < n; ++i)
    		for (int j = 0; j < n - i - 1; ++j)
      			if (arr[j] > arr[j + 1])
     			{	B temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}
int main()
{	int s;
	cout<<"Enter no. of items in array : ";
	cin>>s;
	int arr[s];
	for(int i=0;i<s;i++)
        cin>>arr[i];
  	bubbleSort(arr, s);
  	cout << "Sorted Array : " << endl;
  	for (int i=0;i<s;++i)
    		cout <<arr[i] << " ";
  	return 0;
}
