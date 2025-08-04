#include <stdio.h>

int how_even (int arr[], int size) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
		++count;
		}
	}

	return count;
}

int main () {
	int arr[7] = {2, 5, 4, 6, 9, 17, 87};
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("In array are %d even numbers!\n", how_even(arr, size));

	return 0;
}
