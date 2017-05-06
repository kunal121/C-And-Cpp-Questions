#include <stdio.h>
int main(void)
{
    char p;
    char buf[10] = {1, 2, 3, 4, 5, 6, 9, 8};
    p = (buf + 1)[5];
    printf("%d", p);
    return 0;
}
