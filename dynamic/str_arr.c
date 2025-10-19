#include <stdio.h>
#include <stdlib.h>

int main () {
    char* str = malloc(30);
    if (!str) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(str, 30, stdin);

    printf("Your name is %s", str);

    free(str);

    return 0;
}
