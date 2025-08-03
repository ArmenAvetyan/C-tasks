#include <stdio.h>

void reverse (int arr[], int size) {
	int temp = 0;

	for (int i = 0; i < size / 2; i++) {
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

int main () {
	int arr[7] = {7, 6, 5, 4, 3, 2, 1};
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	reverse(arr, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
