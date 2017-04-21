#include<stdio.h>
int main()
{
		char str[200];
		int i,v=0,d=0,ws=0,others=0,c=0;
		printf("Enter any string: ");
		gets(str);
		for(i=0;str[i]!='\0';i++)
    		{

if(str[i]=='A' || str[i]=='a' || str[i]=='e' || str[i]=='E' || str[i]=='I' || str[i]=='i' || str=='O' || str=='o' || str=='U' ||str=='u')
				v++;
			else if((str[i]>='a' &&str[i]<='z') || (str[i]>='A' &&str[i]<='Z'))
				c++;
			else if(str[i]>='0'&&str[i]<='9')
				d++;
			else if(str[i]==' ')
				ws++;
			else
				others++;
    		}
		printf("Vowels are %d\n",v);
		printf("Consonants are %d\n",c);
		printf("Digits are %d\n",d);
		printf("White spaces are %d\n",ws);
		printf("Special characters are %d\n",others);

}
