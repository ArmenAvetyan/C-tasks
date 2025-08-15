#include <stdio.h>
#include <string.h>

int ret_max (int arr[], int size);
int ret_min (int arr[], int size);

int main () {
    int arr[100] = {0};
    int size = 0;
    char mm[4] = {'\0'};

    while (1) {
        printf("Enter size of array: ");
        if (scanf("%d", &size) != 1 || size < 1) {
            puts("Invalid input!");

            while (getchar() != '\n');

            continue;
        }
        
        break;

    }
    

    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
   }

    printf("Enter (min/max): ");
    scanf("%3s", mm);

    if (strcmp("max", mm) == 0) {
        printf("Max = %d\n", ret_max(arr, size));
    } else if (strcmp("min", mm) == 0) {
        printf("Min = %d\n", ret_min(arr, size));
    } else {
        puts("Invalid input!");
    }

    return 0;
}

int ret_max (int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int max = ret_max(arr + 1, size - 1);
    return (arr[0] > max) ? arr[0] : max;
}

int ret_min (int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int min = ret_min(arr + 1, size - 1);
    return (arr[0] < min) ? arr[0] : min;
}
