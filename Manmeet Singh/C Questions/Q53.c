#include <stdio.h>
int main(void)
{FILE *fileptr1, *fileptr2;
charfilechar[40];
char c;
intdelete_line, temp = 1;
printf("Enter file name: ");
scanf("%s", filechar);
    fileptr1 = fopen(filechar, "r");
    c = getc(fileptr1);
    while (c != EOF)
    {printf("%c", c);
        c = getc(fileptr1);   }
printf(" \n Enter line number to be deleted and replaced");
scanf("%d", &delete_line);
    rewind(fileptr1);
    fileptr2 = fopen("replica.c", "w");
    c = getc(fileptr1);
while (c != EOF)
    {
if (c == 'n')
        {
temp++;
        }
        //till the line to be deleted comes,copy the content to other
if (temp != delete_line)
        {
putc(c, fileptr2);
        }
else
        {
while ((c = getc(fileptr1)) != 'n')
            {
            }
printf("Enter new text");
fflush(stdin);
putc('n', fileptr2);
while ((c = getchar()) != 'n')
putc(c, fileptr2);
fputs("n", fileptr2);
temp++;
        }
        c = getc(fileptr1);
}
fclose(fileptr1);
fclose(fileptr2);
remove(filechar);
rename("replica.c", filechar);
    fileptr1 = fopen(filechar, "r");
    c = getc(fileptr1);
while (c != EOF)
    {
printf("%c", c);
        c = getc(fileptr1);
    }
fclose(fileptr1);
return 0;
}
