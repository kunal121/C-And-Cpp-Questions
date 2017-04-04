#include<stdio.h>
void scan(int *a,int n)
{
    int i;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
}





void print(int *a,int n)
{
printf("Merged array is:\n");
int i;
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}

}






void sort(int *a,int n)
{
	int temp;
	int i;
	for(i=0;i<n-1;i++)
	{
	    int j;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
}




void merge(int *a,int *b,int n,int m)
{
int i=0,j=0,k=0,c[200];
/*	for(i=0;i<n;i++)
		{

		if(a[i]<b[j])
		{
		c[k]=a[i];
		}
		else
		{
		c[k]=b[j];
		j++;
		i--;
		}
*/
while(i<n || j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}

k++;
}
/*for(j;j<m;j++)
{
c[k]=b[j];
k++;
}*/
print(c,k);

}




void main()
{
int a[200],b[200],m,n;
printf("size of first array");
scanf("%d",&n);
printf("size of second array");
scanf("%d",&m);
printf("values of first array");
scan(a,n);
printf("values of second array");
scan(b,m);
sort(a,n);
sort(b,m);
merge(a,b,n,m);
}
