#include <stdio.h>

void second_max (int arr[]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("%d\n", arr[8]);

}

int main () {
	int arr[10] = {10, 34, 56, 87, 61, 975, 768, 544, 931, 201};

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	second_max(arr);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
