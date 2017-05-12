
#include <list>


#include <string>

#include <iostream>
#include <algorithm>


using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    list<int> mylist;
    list<int> mylist1;
    list<int> ::iterator it;
    int i,j;
    for(i=0;i<4;i++)
        {
        int n;
        cin>>n;
        mylist.push_back(n);

    }

    for(j=0;j<4;j++)
        {
        int n;
        cin>>n;
        mylist1.push_back(n);

    }
  //  sort(mylist.begin(),mylist.end());
//    sort(mylist1.begin(),mylist1.end());
    if(*(max_element(mylist1.begin(),mylist1.end())) == 0) mylist1.clear();
    if(mylist1.size()!=0){
    mylist.merge(mylist1);
    mylist.sort();
   for(it=mylist.begin();it!=mylist.end();++it)
        cout<<*it<<" ";
    }
    else
        {
        cout<<"LIST2 is EMPTY"<<endl;
        for(it=mylist.begin();it!=mylist.end();++it){
            mylist1.push_back(3*(*it));
        }
        mylist.merge(mylist1);
    mylist.sort();
   for(it=mylist.begin();it!=mylist.end();++it)
        cout<<*it<<" ";

    }



    return 0;
}
