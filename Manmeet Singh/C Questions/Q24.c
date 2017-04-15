#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char a[100];
    int vowel = 0,i,space=0,consonant=0,j,digits=0;
    printf("Enter the string ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            vowel = vowel + 1;
        }
        else if(a[i]==32)
        {
            space = space + 1;
        }
        else if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' &&a[i]>=97 &&a[i]<=122){
            consonant = consonant+ 1;
        }
        else if(a[i]>=48 && a[i]<=57)
        {
            digits = digits+1;
        }
    }
    printf("Vowels = %d\nWhite Spaces = %d\nConsonants = %d\nDigits = %d",vowel,space,consonant,digits);
}
