#include <stdio.h>

void O_ton (int n) {	
	if (n < 0) return;

	O_ton(n - 1);

	printf("%d ", n);
}

int main () {
	int n = 0;

	puts("Enter a number:");
	scanf("%d", &n);

	O_ton(n);
	printf("\n");

	return 0;
}
