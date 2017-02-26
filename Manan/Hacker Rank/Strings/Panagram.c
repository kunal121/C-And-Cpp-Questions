#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[10000];
    gets(s);
    int j=65,k=97;
    int m=0;
    while(m<strlen(s))
        {
            int i;
    for(i=0;i<strlen(s);i++)
        {
         if(s[i]==j || s[i]==k && j<=91)
             {
             j++;
             k++;
         }
        if(j==91)
            break;
        }
        m++;
    }
    if(j==91)
        printf("pangram");
    else
        printf("not pangram");

    return 0;
}
