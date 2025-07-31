#include <stdio.h>

int main () {
	int x[10] = {0};

	printf("Enter 10 numbers(integer):");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
	}

	for (int i = 0, j = 0; j < 10; j++) {
		if (x[j] % 2 == 0) {
			int temp = x[i];
			x[i] = x[j];
			x[j] = temp;
			i++;
		}
	}

	for (int i = 0; i < 10; i++) {
        	printf("%d ", x[i]);
        }

	printf("\n");

	return 0;
}
