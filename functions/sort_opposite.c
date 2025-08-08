#include <stdio.h>
void sort_opposite (int arr[], int size);

int main() {
	int arr[100] = {0};
	int size = 0;

	printf("Enter size of array:");
	scanf("%d", &size);

	printf("Enter %d integers:", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	sort_opposite(arr, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void sort_opposite (int arr[], int size) {
	if (size <=1) return;

	for (int i = 0; i < size - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	
	sort_opposite(arr, size - 1);
}
