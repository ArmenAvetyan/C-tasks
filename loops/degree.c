#include <stdio.h>

int main () {
	int x = 0;
	int y = 0;
	long long degree = 1;

	printf("Enter (x) and (y)");
	scanf("%d %d", &x, &y);

	int origy = y;

	for (int i = 0; y > i; i++) {
		degree *= x;
	}

	printf("%d to the %dth power is %lld\n", x, origy, degree);

	return 0;
}
