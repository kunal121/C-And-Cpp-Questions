#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int consonant=0,vowel=0,space=0,i,length=0;
    printf("enter string\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            vowel=vowel+1;
        }
       else if(a[i]==32)
        {
        space=space+1;
        }
        else
        {
            consonant=consonant+1;
        }
    }

    for(i=0;a[i]!='\0';i++)
    {
            length=length+1;
    }

    printf(" vowel=%d\n consonant=%d\n spaces=%d\n length=%d\n",vowel,consonant,space,length);
}
