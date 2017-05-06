#include <stdio.h>
#include <string.h>

char str[100], sub[100];
int count = 0, count1 = 0;

void main()
{
    int i, j, l, l1, l2;

    printf("\nEnter a string : ");
    scanf("%[^\n]s", str);

    l1 = strlen(str);

    printf("\nEnter a substring : ");
    scanf(" %[^\n]s", sub);

    l2 = strlen(sub);

    for (i = 0; i < l1;)
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;
            count = 0;
        }
        else
            i++;
    }
    printf("%s occurs %d times in %s", sub, count1, str);
}
