#include <stdio.h>

int main () {
	int x[7] = {1, 3, 45, 67, 32, 9, 10};
	int* px = &x[0];

	for (int i = 0; i < 7; i++) {
		px = &x[i];
		printf("%d\n", *px);
	}

	return 0;
} 
