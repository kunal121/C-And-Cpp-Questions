#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


char* isBalanced(char* s) {
    // Complete this function
    int count = 0, size = strlen(s);
    char* temp = (char *)malloc(size * sizeof(char));
    for (int i=0;s[i] != '\0';i++) {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
            temp[count] = s[i];
            count++;
        }
        else {
            count--;
            switch(s[i]) {
                case '}':
                    if (temp[count] != '{'){     
                        return "NO";
                    }
                    break;
                case ']':
                    if (temp[count] != '['){
                        return "NO";
                    }
                    break;
                case ')':
                    if (temp[count] != '('){
                        return "NO";
                    }
                    break;                   
            }
        }
        
    }
    count--;
    if (temp[count] == temp[count-1]) {
        return "YES";    
    }
    return "NO";
    
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result_size;
        char* result = isBalanced(s);
        printf("%s\n", result);
    }
    return 0;
}

