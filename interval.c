#include <stdio.h>

int main () {
	int x = 0;
	int y = 0;
	int sum = 0;

	printf("Enter a interval:");
	scanf("%d %d", &x, &y);
	
	if (x > y) {
		int temp = x;
		x = y;
		y = temp;
	}
	
	for (int i = x; i <= y; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}

	printf("Sum of even numbers between %d and %d = %d\n", x, y, sum);
	
	return 0;
}
