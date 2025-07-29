#include <stdio.h>

int main () {
	int x[5] = {0};
	int y[5] = {0};

	printf("Enter 5 integers in first array:");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &x[i]);
	}

	printf("Enter 5 integers in second array:");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &y[i]);
	}

	int mul[5] = {0};
	for (int i = 0; i < 5; i++) {
		mul[i] = x[i] * y[i];
		printf("Product = %d\n", mul[i]);
	}

	return 0;
}
