#include<stdio.h>
void print(int a[], int n)
{
    int i;
    for(i=0;i<n;i++) printf("%d ",a[i]);
}

void merge(int arr[], int l, int m, int r)
{
    int i,j,k,n1,n2;
    n1 = m - l + 1;
    n2 = r - m;
    int left[n1], right[n2];
    for(i=0;i<n1;i++)
        left[i] = arr[l + i];
    for (j=0; j<n2; j++)
        right[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = (l + r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {3,5,1,100,-12,-10};
    int arr_size = 6;
    printf("Array Before : \n");
    print(arr, arr_size);
    mergeSort(arr, 0, arr_size-1);
    printf("\nArray after : \n");
    print(arr, arr_size);
}
