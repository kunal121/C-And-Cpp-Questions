#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int x;
int A[4][4],sum=0; //Reading the matrix.
cout << "Enter the elements of the matrix : " << endl;
for(int y=0;y<4;y++)
for (int x=0;x<4;x++)
{
cout << "Element " << x+1 << ", " << y+1 << " : ";
cin>>A[x][y];
}
//Sum of either of the diagonal elements.
for(x=0;x<4;x++)
for(y=0;y<4;y++)
if(x==y)
sum+=A[x][y];
else if(y==4-(1+1));
sum+=A[x][y];
cout << "Sum of either of the diagonal elements is : " << sum;
getch();
}
