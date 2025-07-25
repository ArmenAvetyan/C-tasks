#include <stdio.h>

int main () {
	int x = 0;

	do {
		printf("Enter a number(number > 12):");
		scanf("%d", &x);
		} while (x < 12); 
	
	while (x > 0) {
		int digit = x % 10;
		printf("%d", digit);
		x = x / 10;
	}

	printf("\n");
	
	return 0;
}
