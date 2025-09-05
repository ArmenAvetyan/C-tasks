#include <stdio.h>
size_t my_strlen (char* arr);

int main () {
    char arr[] = {"Hello world!"};

    printf("Length: %zu", my_strlen(arr));

    printf("\n");

    return 0;
}

size_t my_strlen (char* arr) {
    int count = 0;

    while (arr[count] != '\0') {
        count++;
    }

    return count;

}
