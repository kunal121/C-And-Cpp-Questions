#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    for(int a = 0; a < n; a++){
        int grade; 
        scanf("%d",&grade);
        // your code goes here
        if(grade<38)
            {
            printf("%d\n",grade);
        }
        if(grade==38)
            {
            printf("40\n");
        }
        if(grade>38)
            {
            int round=grade,temp=grade;
            while(temp%5!=0)
                {
                temp++;
                round=temp;
            }
            if(round-grade<3)
                {
                printf("%d\n",round);
            }
            else
                {
                printf("%d\n",grade);
            }
        }
    }
    return 0;
}
