#include <stdio.h>
void print_binary (unsigned int);

int main() {
	unsigned int number = 0;

	printf("Enter a number:");
	scanf("%d", &number);

	print_binary(number);
	
	putchar('\n');

	return 0;
}

void print_binary (unsigned int num) {
	if (num > 1) {
		print_binary(num / 2);
	}

	putchar((num % 2) + '0');
}
