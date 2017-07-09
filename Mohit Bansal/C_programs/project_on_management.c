#include<stdio.h>
int i,n=1,st=1;
void add_a_record();
void delete_a_record();
void edit_a_record();
void display_all_record();
struct student
    {
        int rollno;
        char name[20];
        char branch[20];
    }s[100];
void main()
{
    int ch;
    while(1)
    {
        printf("1 for add a record\n");
        printf("2 for delete a record\n");
        printf("3 for edit a record\n");
        printf("4 for display all records\n");
        printf("5 for exit\n");
        printf("Enter the choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:add_a_record();
            break;
            case 2:delete_a_record();
            break;
            case 3:edit_a_record();
            break;
            case 4:display_all_record();
            break;
            case 5:exit(0);
            default:printf("\nInvalid Choice");
        }
}
}
void add_a_record()
{
        printf("Enter the record of %d student\n",st);
        s[st].rollno=st;
        printf("Enter the Student Name : ");
        scanf("%s",s[st].name);
        printf("Enter student branch : ");
        scanf("%s",s[st].branch);
        st++;
        n++;
}
void delete_a_record()
{
    int r,f,j;
    printf("Enter the student roll no to which you want to be delete : ");
    scanf("%d",&r);
    f=0;
    for(i=1;i<=n;i++)
    {
        if(r==s[i].rollno)
        {
         for(j=i;j<=n;j++)
         {
            s[j].rollno=s[j+1].rollno;
            strcpy(s[j].name,s[j+1].name);
            strcpy(s[j].branch,s[j+1].branch);
         }
         n--;
        }
        f=1;
    }
    if(f==0)
    {
        printf("Roll no. is not exist\n");
    }


}
void edit_a_record()
{
    int r,f;
    printf("Enter the student roll no to which you want to be edit : ");
    scanf("%d",&r);
    f=0;
    for(i=1;i<n;i++)
    {
        if(r==s[i].rollno)
        {
        printf("Enter the record of %d student Again\n",r);
        printf("Enter the Student Name : ");
        scanf("%s",s[i].name);
        printf("Enter student branch : ");
        scanf("%s",s[i].branch);
        f=1;
        }
    }
    if(f==0)
    {
        printf("Roll no. is not exist\n");
    }
}
void display_all_record()
{
    if(n>1)
    {
     printf("Name\t");
        printf("Roll No.\t");
        printf("Branch\t\n");
    for(i=1;i<n;i++)
    {
        printf("%s\t",s[i].name);
        printf("%d\t\t",s[i].rollno);
        printf("%s\t\n",s[i].branch);
    }
    }
    else{
        printf("\nNo Record is exist\n");
    }
}
