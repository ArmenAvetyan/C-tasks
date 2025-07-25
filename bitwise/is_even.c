#include <stdio.h>

int main () {
	int x = 0;
	
	printf("Enter a number:");
	scanf("%d", &x);

	if (x & 1) {
		printf("Number is odd!\n");
	} else {
		printf("Number is even!\n");
	}

	return 0;
}
