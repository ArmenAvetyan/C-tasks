#include <stdio.h>

void n_to0 (int n) {
	if (n < 0) return;
	
	printf("%d ", n);
	n_to0(n - 1);
	
}

int main () {
	int num = 0;

	printf("Enter a number:");
	scanf("%d", &num);

	n_to0(num);

	printf("\n");

	return 0;
}
