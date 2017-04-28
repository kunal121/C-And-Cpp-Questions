#include <stdio.h>
#include <stdio.h>
  #include <string.h>
  #define MAX 256
int main() {intlineNo, count = 0;
        FILE *fp1, *fp2;
char file[MAX], str[MAX], temp[] = "temp.txt";
        printf("Enter your input file name:");
scanf("%s", file);
        fp1 = fopen(file, "r");
if (!fp1) {printf("Unable to open the input file!!\n");
return 0;  }
        fp2 = fopen(temp, "w");
        if (!fp2) {printf("Unable to open a temporary file to write!!\n");
fclose(fp1);
return 0;
 }
printf("Enter the line number you want to delete:");
scanf("%d", &lineNo);
while (!feof(fp1)) {
strcpy(str, "\0");
fgets(str, MAX, fp1);
if (!feof(fp1)) {
count++;
if (count != lineNo) {
fprintf(fp2, "%s", str);
                        }     }        }
fclose(fp1);
fclose(fp2);
remove(file);
rename(temp, file);
return 0;
}
