#include <stdio.h>
int my_strstr (const char* source, char const* needle);

int main () {
    const char* arr = "hello world!";
    char const* arr1 = "world";

    printf("%d\n", my_strstr(arr, arr1));

    return 0;
}

int my_strstr (const char* source, char const* needle) {
    if (!*needle) return 0;

    for (int i = 0; source[i] != '\0'; i++) {
        int j = 0;
        while (needle[j] != '\0' && source[i + j] == needle[j]) {
            j++;
        }
        if (needle[j] == '\0') {
            return i;
        }
    }

    return -1;

}
