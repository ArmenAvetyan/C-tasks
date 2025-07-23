#include <stdio.h>

int main () {
	int x = 0; 
	int y = 0; 
	int z = 0;

	printf("Enter three numbers for compare:");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y && x > z) {
		printf("Greater is %d\n", x);
	} else if (y > x && y > z) {
		printf("Greater is %d\n", y);
	} else if (z > x && z > y) {
		printf("Greater is %d\n", z);
	}

	return 0;
}
