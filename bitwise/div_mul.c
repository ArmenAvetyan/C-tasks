#include <stdio.h>

int main () {
	char s = '\0';
	int x = 0;
	int res = 0;

	printf("Enter (/ or *, and 'q' for quit):");
	scanf(" %c", &s);

	while (s != 'q') {
		printf("Enter a number:");
		scanf("%d", &x);

		if (s == '/') {
			res = x >> 1;
			printf("Result = %d\n", res);
		} else if (s == '*') {
			res = x << 1;
			printf("Result = %d\n", res);
		}
		
		printf("Enter (/ or *, and 'q' for quit):");
	        scanf(" %c", &s);
	}

	return 0;
}
