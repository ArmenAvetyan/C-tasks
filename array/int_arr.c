#include <stdio.h>

int main () {
	int x[5] = {0};

	printf("Enter 5 integer:");\
	for (int i = 0; i < 5; i++) {
	scanf("%d", &x[i]);
	}

	for (int i = 0; i < 5; i++) {
		x[i] = x[i] / 5;
		printf("%d\n", x[i]);
	}


	return 0;
}
