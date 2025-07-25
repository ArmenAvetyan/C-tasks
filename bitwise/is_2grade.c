#include <stdio.h>

int main () {
	int x = 0;

	printf("Enter a number:");
	scanf("%d", &x);

	if (x > 0 && (x & (x - 1))) {
		printf("%d is not a power of 2\n", x);
	} else {
		printf("%d is a power of 2\n", x);
	}


	return 0;
}
