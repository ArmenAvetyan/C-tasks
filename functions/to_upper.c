#include <stdio.h>
#include <string.h>
void to_upper(char* arr, int size);

int main () {
    char arr[100] = {'\0'};
    
    printf("Enter string: ");
    fgets(arr, sizeof(arr), stdin);
    arr[strcspn(arr, "\n")] = '\0';

    int size = strlen(arr);

    to_upper(arr, size);

    printf("\n");

    return 0;
}

void to_upper(char* arr, int size) {

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] -= 32;
        }
    printf("%c", arr[i]);
    }
}
