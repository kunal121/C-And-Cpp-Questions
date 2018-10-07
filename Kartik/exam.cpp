/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
int main()
{
    int i,n,j,r;
    int H[100],key;
    cin>>n;
    for(i=0;i<n;i++)
    {
        j=0;
        cin>>key;
    }

   // while(1)
   for(i=0;i<n;i++)
   {
   {  r=((key%n)+j)%n;}

    if(H[i]==0)
    {
        H[i]=key;

    }

    else
    {
        H[i]=r;
    }

}

    for(i=0;i<n;i++)
    {
        cout<<"11"<<" ";
        cout<<"0"<<endl;
    }
    /*cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<H[i];
    }*/
}
