#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sntnc[50], word[50], *ptr[50];
    int pos;
    puts("\nEnter a sentence");
    gets(sntnc);
    fflush(stdin);
    puts("\nEnter a word");
    gets(word);
    fflush(stdin);
    pos=strstr(sntnc,word);
    printf("The word starts at position #%d", pos);
    return 0;
}
