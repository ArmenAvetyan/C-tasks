#include <stdio.h>

int main () {
	int num = 0;
	int original = 0;
	int reversed = 0;

	printf("Enter a integer:");
	scanf("%d", &num);

	original = num;

	while (num > 0) {
		int digit = num % 10;
		reversed = reversed * 10 + digit;
		num = num / 10;
	}

	if (reversed == original) {
		printf("This number is palindrome!\n");
	} else {
		printf("This number is not palindrome!\n");
	}

	return 0;
}
