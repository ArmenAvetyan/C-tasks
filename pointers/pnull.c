#include <stdio.h>

int main () {
	int* ptr = NULL;

	printf("%p\n", ptr);	

	if (ptr == NULL) {
		printf("Pointer is NULL!\n");
	}


	return 0;
}
