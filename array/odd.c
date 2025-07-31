#include <stdio.h>

int main () {
	int arr[10] = {0};
	int count = 0;

	printf("Enter 10 integers:");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			++count;
		}
	}
	
	printf("%d\n", count);

	return 0;
}
