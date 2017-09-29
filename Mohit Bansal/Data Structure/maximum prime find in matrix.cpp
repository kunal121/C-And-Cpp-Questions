#include<iostream>
#include<math.h>
using namespace std;
class myarr
{
    int r;
    int c;
    int **arr;
public :
    void get()
    {
        cout<<"Enter the size of matrix"<<endl;
        cout<<"Enter number of rows"<<endl;
        cin>>r;
        cout<<"Enter number of columns"<<endl;
        cin>>c;
        arr=new int*[r];
        for(int i=0;i<r;i++)
            arr[i]=new int[c];
        cout<<"Enter elements"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                cin>>arr[i][j];
        }
    }
    int check_prime(int x)
    {
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
                return 0;
        }
        if(x==1)
            return 0;
        return 1;
    }
    void prime()
    {
        int accumulator[r];
        int row=0,maxx=0;
        for(int i=0;i<r;i++)
        {
            int co=0;
            for(int j=0;j<c;j++)
            {
                if(check_prime(arr[i][j])==1)
                    co++;
            }
            accumulator[i]=co;
            if(maxx<accumulator[i])
            {
                maxx=accumulator[i];
                row=i;
            }
        }
        this->display();
        cout<<"The row with maximum number of prime numbers in the above matrix is:"<<endl;
        int j=0;
        for(int i=0;i<c;i++)
            {
                cout<<arr[row][i]<<" ";
                if(arr[row][i]>arr[row][j])
                {
                    j=i;
                }
            }
        cout<<endl<<"Maximum prime in this row is: "<<arr[row][j]<<" and is present in "<<j+1<<" column";
    }
    void display()
    {
        cout<<"Matrix is"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
};
int main()
{
    myarr obj;
    obj.get();
    obj.prime();
}
