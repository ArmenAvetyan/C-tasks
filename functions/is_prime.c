#include <stdio.h>

int is_prime (int number) {
	int is_prime = 0;	

	if (number == 0 || number == 1) return 0;

	for (int i = 2; i <= number / 2 ; i++) {
		if (number % i == 0) {
			return 0;
		} else {
			return 1;
		}
	}
	return is_prime;
}

int main () {
	int x = 0;

	printf("Enter a number:");
	scanf("%d", &x);

	if (is_prime(x)) {
		printf("Number is prime!\n");
	} else {
		printf("Number is not prime!\n");
	}

	return 0;
}
