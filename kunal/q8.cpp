#include <iostream>
#include<string>

using namespace std;
class internal{

 protected:
 int i,imarks[3];
 public:
    internal(int marks[3])
    {
        for(i=0;i<3;i++)
        {
            imarks[i]=marks[i];
        }
    }
};
class external
{
    protected:
    int emarks[3],i;
    public:
    external(int marks1[3])
    {
        for(i=0;i<3;i++)
        {
            emarks[i]=marks1[i];
        }
    }
};
class Result:public internal,external
{
    protected:
    int total=0,total1,i;
    public:
    Result(int imarks[3],int emarks[3]):internal(imarks),external(emarks)
    {
        for(i=0;i<3;i++)
        {
            total=total+imarks[i];
        }
        for(i=0;i<3;i++)
        {
            total1=total1+emarks[i];
        }
        cout<<total<<"\n";
        cout<<total1<<"\n";
        cout<<total+total1<<"\n";
    }

};
int main() {

    int i;
    int imarks[3],emarks[3];
    for(i=0;i<3;i++)
        {
        cin>>imarks[i];

    }
    for(i=0;i<3;i++)
        {
        cin>>emarks[i];

    }
    Result r(imarks,emarks);
    return 0;
}
