#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j=0; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high) {
        /** pi is partitioning index, arr[pi] is at right place now */
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main()
{
    int arr[] = {22,2,-1,100,-19};
    int arr_size = 5;
    cout << "Array before : \n";
    print(arr, arr_size);
    quickSort(arr, 0, arr_size-1);
    cout << "\nArray after : \n";
    print(arr, arr_size);
}
