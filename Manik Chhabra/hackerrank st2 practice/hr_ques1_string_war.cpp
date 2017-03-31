#include<iostream>
#include<string.h>
using namespace std;
class arjun
{
protected:
int n;
char str[60][60];
public:
void read()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
		}
	}
	};
class keith:public arjun
    {
    public:
    int d[10]={1},e=0,i,j,max=0,k=0,at=0,bt=0,x,y;
    char a[15],b[50][50];
    void result()
        {

       for(i=0;i<n;i++)
           {
           strcpy(a,str[i]);
           for(j=i+1;j<n;j++)
               {
               if(strcmp(a,str[j])==0)
                   {
                   d[i]++;
               }
           }
       }
        max=d[0];
        for(i=1;i<n;i++)
            {

           if(d[i]>max)
               {
               max=d[i];
               e=i;
           }

        }
         for(i=0;i<n;i++)
            {

           if(max==d[i])
               {
               x=strlen(str[e]);
               y=strlen(str[i]);
               for(j=0;j<x;j++)
                   {
                   at=at+j;
               }
               for(j=0;j<y;j++)
                   {
                   bt=bt+j;
               }
               k=i;
           }


        }
         if(at>bt)
                 {
                 cout<<str[e]<<'\n'<<max;
             }
             else
                 {
                 cout<<str[k]<<"\n"<<d[k];
             }
    }

};
int main()
{
	keith d1;//derived class object
	d1.read();//function in base class for input
	d1.result();//function in derived class for output
	return 0;
}

