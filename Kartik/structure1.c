#include<stdio.h>
#include<stdlib.h>
main()
{

    	struct names
    	{
        		char n[100],email[100];
        		int age;
        		long long int phone;
    	};
    	struct home
    	{
        		char street[100],city[100],houseno[100];
    	};
    	struct birth
    	{
        		int date,month,year;
    	};
    	struct names s1[100];
    	struct home s2[100];
    	struct birth s3[100];
    	int i,n,r;
    	printf("enter the number of enteries : ");
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{

        		printf("enter the name : ");
        		scanf(" %[^\n]s ",s1[i].n);
        		printf("enter the age : ");
        		scanf("%d",&s1[i].age);
        		printf("enter the phone no : ");
        		scanf("%lld",&s1[i].phone);
        		printf("enter the email id : ");
        		scanf(" %[^\n]s ",s1[i].email);
        		printf("enter the house no. : ");
        		scanf(" %[^\n]s ",s2[i].houseno);
        		printf("enter the street name : ");
        		scanf(" %[^\n]s ",s2[i].street);
        		printf("enter the city name : ");
        		scanf(" %[^\n]s ",s2[i].city);
        		printf("enter the birthday date : ");
        		scanf("%d",&s3[i].date);
        		printf("enter the birthday month : ");
        		scanf("%d",&s3[i].month);
        		printf("enter the birthday year: ");
        		scanf("%d",&s3[i].year);
    	}
    	system("cls");
    	for(i=1;i<=n;i++)
    	{
printf("\nname :%s\nage:%d\nphone-no:%lld\nemail-id:%s\n",s1[i].n,s1[i].age,s1[i].phone,s1[i].email);
printf("house-no:%s\nstreet-name :%s\ncity-name:%s\n",s2[i].houseno,s2[i].street,s2[i].city);
        		printf("birthday : %d/%d/%d\n",s3[i].date,s3[i].month,s3[i].year);

    	}
}

