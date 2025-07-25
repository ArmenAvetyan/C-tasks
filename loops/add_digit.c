#include <stdio.h>

int main () {
	int x = 0;
	int sum = 0;

	printf("Enter a number:");
	scanf("%d", &x);

	if (x < 0) {
		x = -x;
	}

	while (x > 0) {
		int digit = x % 10;
		sum += digit;
		x = x / 10;
	}

	printf("Sum of digits = %d\n", sum);
	
	return 0;
}
