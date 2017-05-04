#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
   int a,i,j,flag=0;
   string s,r;

    cin>>a;
   for(i=0;i<a;i++)
   {
   cin>>s;
   r=s;
   reverse(r.begin(),r.end());

   for(j=0;j<s.length()-1;j++)
   {

      if(abs(s[j+1]-s[j])==abs(r[j]-r[j+1]))
      {
          flag=1;
      }
      else
      {
          flag=0;
          break;
      }
   }
       if(flag==1)
       {
           cout<<"Funny"<<endl;
           flag=0;
       }
       else
       {
           cout<<"Not Funny"<<endl;
           flag=0;
       }
   }
    return 0;
}

