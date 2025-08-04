#include <stdio.h>

void swap (int* a, int* b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main () {
	int a = 0;
	int b = 0;

	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	
	swap(&a, &b);
	
	printf("a = %d, b = %d\n", a, b);
	
	return 0;
} 
