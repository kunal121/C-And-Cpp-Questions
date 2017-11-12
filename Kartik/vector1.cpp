#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void disp(vector <char> str)
{
    vector <char> :: iterator itr;
    cout<<"printing through disp function ";
    for(itr=str.begin();itr!=str.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}
void  disp_reverse(vector <char> str)
{
    vector <char> :: reverse_iterator itr;
    cout<<"printing through disp_reverse function ";
    for(itr=str.rbegin();itr!= str.rend();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main()
{
    vector <char> str;
    vector <char> :: iterator itr;
    char a='a';
    for(int i=0;i<10;i++)
    {
        str.push_back(a);
        a++;
    }
    disp(str);
    disp_reverse(str);
    cout<<"reversing the vector ";
    reverse(str.begin(),str.end());
    disp(str);
    cout<<"Size equals to "<<str.size()<<endl;
    cout<<"Start of string "<<*str.begin()<<endl;
    cout<<"End of string "<<str.back()<<endl;
    str.erase(str.begin()+2);
    disp(str);
    str.erase(str.begin(),str.begin()+3);
    disp(str);
return 0;
}
