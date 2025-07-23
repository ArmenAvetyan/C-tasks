#include <stdio.h>

int main () {
	int x = 0;
	int y = 10;
	int res = 0;

	printf("Enter a positive number:");
	scanf("%d", &x);

	if (x > 0) {
		for (int i = 0; i < y; i++) {
			res += x;
			printf("%d \n", res);
		}
	}

	return 0;
}
