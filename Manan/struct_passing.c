#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char name[20];
    char branch[10];
};
int i=0;


void add(struct student s[])
{
    s[i].roll=i+1;
    scanf("%s",s[i].name);
    scanf("%s",s[i].branch);
    i++;
}
void del(struct student s[])
{
    int j,r,t=0,pos;
    printf("Enter a roll no whose record to be deleted");
    scanf("%d",&r);
    for(j=0; j<i; j++)
    {
        if(s[j].roll==r)
        {
            pos=j;
            t=1;
        }
    }
    if(t==1)
    {
        for(j=pos; j<i; j++)
        {
            s[pos]=s[pos+1];
        }
        i--;
    }
    else
        printf("\nroll no not found\n");

}



void edit(struct student s[])
{
    int j,r,t=0,pos;
    printf("Enter the roll no of stdent whose data to be edited:");
    scanf("%d",&r);
    for(j=0; j<i; j++)
    {
        if(s[j].roll==r)
        {
            pos=j;
            t=1;
        }
    }
    if(t==1)
    {
        printf("Enter new name of student");
        scanf("%s",s[pos].name);
        printf("Enter new branch of student");
        scanf("%s",s[pos].branch);
    }
    else
        printf("\nroll no not found\n");

}



void display(struct student s[])
{
    int j;
    for(j=0; j<i; j++)
    {
        printf("\nroll no\t%d\n",s[j].roll);
        printf("name\t%s\n",s[j].name);
        printf("branch\t%s\n",s[j].branch);
    }
}



void main()
{
    int x=1;
    int ch;
    struct student s[100];
    while(x==1)
    {
        printf("\n1.add a record\n2.delete a record\n3.edit a record\n4.Display all records\n5.exit\n");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            add(s);
            break;
        case 2:
            del(s);
            break;

        case 3:
            edit(s);
            break;


        case 4:
            display(s);
            break;
        default :
            x=0;
            printf("Exiting.....");
            break;
        }
    }
    printf("Thank you for your time.....  :)");
}


