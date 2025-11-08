#include <stdio.h>
#include <stdlib.h>

void* custom_calloc(size_t num, size_t size);

int main () {
    int size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int* a = (int*)custom_calloc(size, sizeof(int));

    free(a);
    return 0;
}

void* custom_calloc(size_t num, size_t size) {
    void* ptr = malloc(num * size);
    if (!ptr) return NULL;

    for (int i = 0; i < num * size; ++i) {
        ((unsigned char*)ptr)[i] = 0;
     }  

    return ptr;
}
