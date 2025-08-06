#include <stdio.h>

int product (int num) {

	if (num < 0) {
		num = -num;
	}
	
	if (num == 0) return 0;
	if (num < 10) return num;
	
	return (num % 10) * product(num / 10);
	
}

int main () {
	int number = 0;

	printf("Enter a number:");
	scanf("%d", &number);

	printf("Product of digits: %d\n", product(number));

	return 0;
}
