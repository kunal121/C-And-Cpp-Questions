#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char a[100];
    int vowel = 0,i,space=0,consonant=0,j,word=0;
    printf("Enter the string ");
    gets(a);
    if(a[0]==32)
        word=word-1;
    for(i=0;a[i]!='\0';i++)
    {

        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            vowel = vowel + 1;
        }

        else if(a[i]==32)
        {
            word=word+1;
            while(a[i]==32)
            {
                space=space+1;
                i=i+1;
            }
            i=i-1;
        }
        else if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'){
            consonant = consonant+ 1;
        }
    }
    if(vowel==0 && consonant==0)
    {
        word=-1;
    }
    if(a[i-1]==32)
    {
        word=word-1;
    }
    printf("Vowels = %d\nWhite Spaces = %d\nConsonants = %d\nWords = %d",vowel,space,consonant,word+1);
}
