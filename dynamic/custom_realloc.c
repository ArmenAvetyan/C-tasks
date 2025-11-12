#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* custom_realloc(void*, size_t, size_t);

int main () {
    int size = 0;
    int new_size = 0;

    printf("Enter size of array(with bytes): ");
    scanf("%d", &size);
   
    int* rptr = (int*) malloc(size);
    if (rptr) {
        printf("malloc succeeded\n");
    }

    printf("Enter new size of array(with bytes): ");
    scanf("%d", &new_size);

    rptr = (int*) custom_realloc(rptr, size, new_size);
    if (rptr != NULL) {
        printf("realloc succeeded\n");
    }

    free(rptr);
}

void* custom_realloc(void* ptr, size_t old_size, size_t new_size) {
    if (!ptr) {
        return malloc(new_size);
    }
    
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    void* new_ptr = malloc(new_size);
    if (!new_ptr) {
        perror("realloc failed");
        return NULL;
    }

    int cp_size = old_size < new_size ? old_size : new_size;
    memmove (new_ptr, ptr, cp_size);

    free(ptr);

    return new_ptr;
}
