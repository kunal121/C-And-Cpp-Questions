#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef struct{
    string person_name;
    string city;
    string car_name;
    int  model;
    int year;
}customer;
vector <customer> v;
int main()
{
    int i;
    int j;
    int year;
    customer c;
    int count=1;
    int max=0;
    for(i=0;i<3;i++)
    {
    cin>>c.person_name;
    cin>>c.city;
    cin>>c.car_name;
    cin>>c.model;
    cin>>c.year;
    v.push_back(c);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
        if((v[i].car_name==v[j].car_name)&& (v[i].year==v[j].year))
        {
          cout<<v[i].person_name<<v[i+1].person_name;
        }
        if((v[i].year==v[j].year))
        {
            count++;
            if(count>max)
            {
                max=count;
                year=v[i].year;
            }
        }
        /*cout<<v[i].person_name;
        cout<<v[i].city;
        cout<<v[i].car_name;
        cout<<v[i].model;
        cout<<v[i].year;*/
        }
    }
    cout<<max<<year;
}
