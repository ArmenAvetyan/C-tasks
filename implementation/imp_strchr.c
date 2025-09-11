#include <stdio.h>
char* my_strchr (const char arr[], int a);

int main () {
    char const arr[] = {"Hello World!"};
    char a = 'o';

    printf("%lu\n", my_strchr(arr, a) - arr);

    return 0;
}

char* my_strchr (const char arr[], int a) {
    while (*arr != '\0') {
        if (*arr == (char)a) {
            return (char*)arr;
        }
        arr++;
    }

    if (*arr == '\0') {
        return (char*)arr;
    }

    return NULL;

}
