#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],*ptr;
    int i,j,count=0,freq[50];
    printf("Enter string to find frequency of characters in it \n");
    scanf("%[^\n]",str);
    ptr=str;
    int len=strlen(ptr);
    for(i=0;i<len;i++)
    {
        freq[i]=-1;
    }
    printf("\n**Frequency**\n");
    for(i=0;i<len;i++)
    {
        count=1;
        for(j=i+1;j<=len;j++)
        {
            if(ptr[i]==ptr[j])
            {
                freq[j]=0;
                count++;
            }
             if(freq[i]!=0)
                freq[i]=count;
        }
        if(freq[i]>0)
            printf("%c ---> %d \n",ptr[i],freq[i]);
    }

}
