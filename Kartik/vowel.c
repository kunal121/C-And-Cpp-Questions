#include<stdio.h>
void main()
{
char a;
printf("Enter any alphabet");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{
printf("Alphabet is vowel");
}
else
{
printf("Not a vowel");
}
}
