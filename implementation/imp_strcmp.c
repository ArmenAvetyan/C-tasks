#include <stdio.h>
int my_strcmp (char const* arr, char const* arr1);

int main () {
    const char arr[] = {"Hello World!"};
    char const arr1[] = {"Hello World!"};

    my_strcmp(arr, arr1);
    printf("%d\n", my_strcmp(arr, arr1));

    return 0;
}

int my_strcmp (char const* arr, char const* arr1) {
    
    int i = 0;

    while (arr[i] == arr1[i] && arr[i] != '\0') {
        i++;
    }

    return (unsigned char) (arr[i]) - (unsigned char) (arr1[i]);

}
