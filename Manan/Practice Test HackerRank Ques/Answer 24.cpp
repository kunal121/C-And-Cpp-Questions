#include <iostream>
#include <string.h>
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
        for(int i=0; i<n; i++)
        {
            cin>>str[i];
        }
    }
};

class keith:public arjun
{
public:
    void result()
    {
        int k = 0;
        int pos = 0;
        for(int i=0; i<n; i++)
        {
            int c = 0;
            for(int j=i; j<n; j++)
            {
                if(strcmp(str[i],str[j])==0)
                    c++;
            }
            if(c>k)
            {
                k=c;
                pos = i;
            }
            else if(c==k)
            {
                if(strcmp(str[pos],str[i])<0)
                {
                    k=c;
                    pos = i;
                }
            }
        }
        cout<<str[pos]<<endl<<k;
    }

};

int main()
{

    keith d1;//derived class object
    d1.read();//function in base class for input
    d1.result();//function in derived class for output
    return 0;
}
