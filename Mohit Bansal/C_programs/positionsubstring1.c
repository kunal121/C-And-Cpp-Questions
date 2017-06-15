#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sntnc[50], word[50], *ptr;
    int pos;
    puts("\nEnter a sentence");
    gets(sntnc);
    fflush(stdin);
    puts("\nEnter a word");
    gets(word);
    fflush(stdin);
    ptr=strstr(sntnc,word);

    //how do I find out at what position the word occurs in the sentence?

    //Following is the required output
    printf("The word starts at position #%d", pos);
    return 0;
}
