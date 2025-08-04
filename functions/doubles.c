#include <stdio.h>

void doubles (int arr[], int size) {
	
	for (int i = 0; i < size; i++) {
		arr[i] *= 2;
	}
}

int main () {
	int arr[5] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	doubles(arr, size);
	
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
