#include<stdio.h>
int arr[],n;
void main()
{
    int choice;
    printf("1.Add value at specific position \n2.Add value at beginning of array\n3.Add value at last position\n4.Delete particular value of array\n5.Delete value at particular position\n6.Delete first element of array\n7.Delete last value of array\n8.Display all elements of array\n9.EXIT\n");
    //one();
    //two();
    //three();
    //five();
    //six();
    //seven();
}
int one()
{
    int value,pos,i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value you want to enter");
    scanf("%d",&value);
    printf("Enter the position");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    n=n+1;
    arr[i+1]=value;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
int two()
{
    int value,i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value you want to enter");
    scanf("%d",&value);
    for(i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    n=n+1;
    arr[i+1]=value;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
int three()
{
    int value,i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    n=n+1;
    int arr[n];
    printf("Enter the elements ");
    for(i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value you want to enter");
    scanf("%d",&value);
    for(i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[i-1]=value;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
int five()
{
    int pos,i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    n=n-1;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
int six()
{
    int value,i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    n=n-1;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
int seven()
{
    int i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    for(i=1;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
int four()
{
    int i,n,value;

}
