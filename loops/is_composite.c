#include <stdio.h>

int main () {
	int x = 0;

	printf("Enter a number:");
	scanf("%d", &x);

	if (x == 0) {
                printf("0 is digit!\n");
	
	if (x % 2 == 0 || x % 3 == 0) {
		printf("Number is composite!\n");
		if (x == 1) {
			printf("1 is not prime or composite!\n");
		}
	} else {
		printf("Number is prime!\n");
	}
	}

	return 0;
}
