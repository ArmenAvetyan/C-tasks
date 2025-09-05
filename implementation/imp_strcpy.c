#include <stdio.h>
int my_strcpy (char* arr, const char* arr1, size_t length);

int main () {
    const char arr[] = {"Hello world!"};
    char arr1[50] = {'\0'};

    my_strcpy(arr1, arr, 5);
    printf("%s\n", arr1);

    return 0;
}

int my_strcpy (char* arr, const char* arr1, size_t length) {
    int i = 0;
    
    if (length > 0) {
        while (i < length - 1 && arr1[i] != '\0') {
            arr[i] = arr1[i];
         i++;
        }
        arr[i] = '\0';
    }

    while (arr1[i] != '\0') {
        i++;
    }

    return i;
}
