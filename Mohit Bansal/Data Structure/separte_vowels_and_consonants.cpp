#include<iostream>
using namespace std;
class myarr
{
    int n;
    char *ar;
public:
    void get()
    {
        cout<<"Enter the number of characters stored"<<endl;
        cin>>n;
        ar=new char[n];
        for(int i=0;i<n;i++)
            {
                cin>>ar[i];
            }
    }
    int isvowel(char t)
    {
        if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
            return 1;
        return 0;
    }
    void separate()
    {
        int t=n;
        for(int i=0;i<n;i++)
        {
            if(!isvowel(ar[i]))
            {
                char temp=ar[i];
                ar[i]=ar[t-1];
                ar[t-1]=temp;
                i--;
                t--;
            }
        }
        cout<<"After separating vowels and consonants: ";
        for(int i=0;i<n;i++)
            cout<<ar[i];
    }

};
int main()
{
    myarr obj;
    obj.get();
    obj.separate();
}
