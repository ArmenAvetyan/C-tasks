#include <stdio.h>
char* my_strcat (char* arr1, const char* arr);

int main () {
    const char arr[] = {"World!"};
    char arr1[12] = {"Hello"};

    my_strcat(arr1, arr);
    printf ("%s\n", arr1);

    return 0;
}

char* my_strcat (char* arr1, const char* arr) {
    int i = 0;
    int j = 0;

    while (arr1[i] != '\0') {
        i++;
    }

    while (arr[j] != '\0') {
        arr1[i] = arr[j];
        i++;
        j++;
    }
    
    arr1[i] = '\0';

    return arr1;

}
