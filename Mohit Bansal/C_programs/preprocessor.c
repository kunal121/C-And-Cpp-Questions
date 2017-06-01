#include<stdio.h>
#define merge(a,b)a##b
#define num 20

/*void main()
{
    printf("%d",merge(5,6));
}
void main()
{
    #if(num==20)
    #define max 50
    #else
    #undef num
    #endif
    printf("%d",num);
}
void main()
{
    #if(num==20)
    #define max 50
    #elif(num>10)
    #define sum 50
    #else
    #define sum 100
    #endif
    printf("%d",max);
}
void main()
{
    printf("%d",__LINE__);
    printf("%s",__DATE__);
    printf("%s",__FILE__);
    printf("%s",__TIME__);
}
void main()
{
    #ifdef num 20
    #define num 50
    #else
    #define sum 400
    #endif
    printf("%d",num);
}*/
void main()
{
    #ifndef num 20
    #define sum 20
    #else
    #define max 100
    #endif
    printf("%d",max);
}
