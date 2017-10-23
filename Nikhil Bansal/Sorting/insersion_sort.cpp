#include<iostream>
using namespace std;

void insersionSort(int arr[], int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void print(int arr[], int n)
{
    for (int i=0;i<n;i++) cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1,-1,0,100,-12};
    int arr_size = 5;
    insersionSort(arr, arr_size);
    print(arr, arr_size);
}
