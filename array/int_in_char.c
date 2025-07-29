#include <stdio.h>

int main () {
	char x[100] = {'0'};
	int n = 0;
	
	printf("Enter array length:");
	scanf("%d", &n);

	printf("Enter chars:");
	for (int i = 0; i < n; i++) {
		scanf(" %c", &x[i]);
	}

	for (int i = 0; i < n; i++) {
		if (x[i] >= '0' && x[i] <= '9') {
			printf("%c\n", x[i]);
		}
	}

	return 0;
}
