/**
*	This is solution to hackerrank problem C++ -> Problem
*	Link : https://www.hackerrank.com/challenges/c-tutorial-pointer
*/
#include<stdio.h>
using namespace std;
void update(int *a,int *b) {
    // Complete this function    
    int c,d;
    c = *a;
    d = *b;
    *a = c + d;
    if(c>d)
        *b = c - d;
    else
        *b = d - c;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d",&a,&b);
    update(pa, pb);
    printf("%d\n%d",a,b);

    return 0;
}

