/**
*   This is solution to the Drawing Book problem in Algo domain of Hacker Rank
*   Question can be found here : https://www.hackerrank.com/challenges/drawing-book
*/
#include <iostream>
#include <sstream>
using namespace std;


int main(){
    int n,front=0,back=0;
    cin >> n;
    int p;
    cin >> p;
    for(int i=1;i<=n;i+=2)
    {
        if(p <= i)
            break;
        else
            front++;

    }
    if(n%2 == 0)
    {
        for(int i=n;i>0;i-=2)
        {
            if(p >= i)
                break;
            else
                back++;
        }
    }
    else
    {
        for(int i=n;i>0;i-=2)
        {
            if(p >= i-1)
                break;
            else
                back++;
        }
    }
    if(front > back)
        cout << back;
    else
        cout << front;
    return 0;
}

