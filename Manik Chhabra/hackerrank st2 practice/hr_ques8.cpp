#include <iostream>


using namespace std;
class Internal
    {
    protected:
        int i[3],k,total=0;
    public:
        Internal(int imarks[3])
            {
            for(k=0;k<3;k++)
                {
                i[k]=imarks[k];
                total=total+i[k];
            }
        }
};
class External
    {
    protected:
        int e[3],k,total1=0;
    public:
        External(int emarks[3])
            {
            for(k=0;k<3;k++)
                {
                e[k]=emarks[k];
                total1=total1+e[k];
            }
        }
};
class Result:public Internal,public External
{
    public:
        Result(int imarks[3],int emarks[3]):Internal(imarks),External(emarks)
            {
            cout<<total<<"\n"<<total1<<"\n"<<total+total1;
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
}
