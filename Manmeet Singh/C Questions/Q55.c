#include <stdio.h>
#include <stdlib.h>
main()
{
    FILE *fsring1,*fsring2,*ftemp;
char ch, file1[20], file2[20], file3[20];
printf("Enter name of first file ");
gets(file1);
printf("Enter name of second file ");
gets(file2);
printf("Enter name to store merged file ");
gets(file3);
    fsring1 =fopen(file1,"r");
    fsring2 =fopen(file2,"r");
if(fsring1 == NULL || fsring2 == NULL)
{
perror("Error has occured");
printf("Press any key to exit...\n");
exit(EXIT_FAILURE);
}
    ftemp =fopen(file3,"w");
if(ftemp == NULL)
{
perror("Error has occures");
printf("Press any key to exit...\n");
exit(EXIT_FAILURE);}
while((ch =fgetc(fsring1))!= EOF)
fputc(ch, ftemp);
while((ch =fgetc(fsring2))!= EOF)
fputc(ch, ftemp);
printf("Two files merged  %s successfully.\n", file3);
fclose(fsring1);
fclose(fsring2);
fclose(ftemp);
return0;
}
