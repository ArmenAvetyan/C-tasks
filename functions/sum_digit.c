#include <stdio.h>

int sum (int number) {
	int sum = 0;

	if (number < 0) {
		number = -number;
	}

	while (number != 0) {
		sum += number % 10;
		number /= 10;
	}

	return sum;
}

int main () {
	int x = 0;

	printf("Enter a number:");
	scanf("%d", &x);

	printf("%d\n", sum(x));

	return 0;
}
