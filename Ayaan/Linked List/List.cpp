#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> num;
    int n;
    list <int>:: iterator it;
    for(int i=0;i<10;i++){
        cin>>n;
        num.push_front(n);
    }
    for(it=num.begin();it!=num.end();it++)
    {
        cout << *it;
        //num.push_front(n);
    }
    //for(int i=0;i<10;i++)
    //{
  //      cout>>num.push_back(i);
//    }

}
