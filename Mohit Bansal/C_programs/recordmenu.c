#include<stdio.h>
void main()
{
    int i,j,n,no,c=0,f;
    struct student
    {
        int rollno;
        char name[20],branch[20];
    }s[100];
    printf("enter how many students req");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter roll no of %d student\n",i+1);
        scanf("%d",&s[i].rollno);
        printf("enter name of student\n");
        scanf("%s",s[i].name);
        printf("enter branch name\n");
        scanf("%s",s[i].branch);
    }
    printf("enter choice\n1.add a record \n2.delete a record\n3.edit a record\n4.display a record\n5.exit");
    scanf("%d",&f);
     while(f)
    {
    switch(f)
 {
     case 1:
         printf("enter roll no");
         scanf("%d",s[i].rollno);
            break;
    case 2:

        break;
    case 3:
        printf("enter roll no u want to edit");
        scanf("%d",&no);
        for(i=0;i<n;i++)
            {
                if(no == s[i].rollno)
                {
                    printf("enter new name of student\n");
                    scanf("%s",s[i].name);
                    printf("enter new branch name\n");
                    scanf("%s",s[i].branch);
                    c=1;
                }
            }
        if(c==0)
            printf("roll not found");
            break;
        case 4:

    printf("rollno\t\tname\t\tbranch\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%s\n",s[i].rollno,s[i].name,s[i].branch);
    }
            break;
        case 5:
            break;
        default:printf("wrong value entered");
    }

}
}

