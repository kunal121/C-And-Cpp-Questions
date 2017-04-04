    #include<stdio.h>

    struct student
    {
        char name[30];
        int roll;
        int marks[1][5];
    };

    void main()
    {
        int n=1;
        struct student st[n];
        int i=0,j,choice=1;
        while(choice==1)
        {
                printf("Enter the name : ");
                scanf("%s",st[i].name);
                printf("Enter the roll : ");
                scanf("%d",&st[i].roll);
                for(j=0;j<5;j++)
                {
                    printf("Enter marks in Subject %d : ",j+1);
                    scanf("%d",&st[i].marks[i][j]);
                }
            printf("Press 1 to add another record and 0 to exit ");
            scanf("%d",&choice);
            if(choice==1)
            {
                n++;
                i++;
            }

        }
        for(i=0;i<n;i++)
        {
                printf("Name : %s\n",st[i].name);
                printf("Roll : %d\n",st[i].roll);
                for(j=0;j<5;j++)
                {
                    printf("Marks in Subject %d : %d\n",j+1,st[i].marks[j]);
                }
        }
    }
