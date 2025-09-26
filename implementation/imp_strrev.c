#include <stdio.h>
#include <string.h>
char* my_strrev (char* str);

int main () {
    
    char str[] = "Hello, world!";
    printf("Original: %s\n", str);
    my_strrev(str);
    printf("Reversed: %s\n", str);

    return 0;
}

char* my_strrev (char* str) {
    if (!str) return NULL;

    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    return str;

}
