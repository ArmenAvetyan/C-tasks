#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* trim(char* str);

int main () {
    char str[] = "   \t  Hello, world!   \n  ";
    printf("Original: [%s]\n", str);

    char* trimmed = trim(str);
    printf("Trimmed:  [%s]\n", trimmed);


    return 0;
}

char* trim(char* str) {
    char* end = NULL;

    while (isspace((unsigned char)*str)) { 
        str++;
    }

    if (*str == 0) {
        return str;
    }

    end = str + strlen(str) - 1;
    while (isspace((unsigned char)*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}
