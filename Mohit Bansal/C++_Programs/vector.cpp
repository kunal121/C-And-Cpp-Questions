#include<vector>
#include<iostream>
using namespace std;
int main()
{
/*vector<int> v;
v.push_back(4);
v.push_back(4);
v.push_back(4);

for(int i=0;i<3;i++)
cin>>v[i];

for(int i=0;i<3;i++)
cout<<v[i];

vector<int> v3(3);
for(int i=0;i<v3.size();i++)
cin>>v3[i];

for(int i=0;i<v3.size();i++)
cout<<v3[i];
*/
vector<int> v2(3,100);
for(int i=0;i<v2.size();i++)
cout<<v2[i];

vector<int> v1(v2);
for(int i=0;i<v1.size();i++)
cout<<v1[i];

int a[5]={1,2,3,4,5};
vector<int> v4(a,a+5);
for(int i=0;i<v4.size();i++)
cout<<v4[i];

v2.pop_back();
v2.pop_back();
v2.pop_back();
v2.pop_back();

cout<<v4.front();
cout<<v4.back();


if(v4.empty())
{
cout<<"vector is empty";
}
else
{
for(int i=0;i<v4.size();i++)
cout<<v4[i];
}

v2.clear();
for(int i=0;i<v2.size();i++)
cout<<v2[i];


}
