#include <stdio.h>

int reverse (int num) {

	int reversed = 0;

	while (num > 0) {
		int digit = num % 10;
		reversed = reversed * 10 + digit;
		num = num / 10;
	}

	return reversed;

}

int main () {
	int n = 0;

	printf("Enter a number:");
	scanf("%d", &n);

	printf("%d\n", reverse(n));


	return 0;
}
