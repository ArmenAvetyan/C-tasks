#include <stdio.h>
void sort (int arr[], int size);

int main () {
	int arr[100] = {0};
	int size = 0;

	printf("Enter size of array:");
	scanf("%d", &size);

	printf("Enter %d integers:", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}

void sort (int arr[], int size) {
	if (size <= 1) return;

	for (int j = 0; j < size - 1; j++) {
		if (arr[j] > arr[j + 1]) {
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}

	sort(arr, size - 1);
}
