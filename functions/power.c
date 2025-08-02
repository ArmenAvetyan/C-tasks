#include <stdio.h>

int power (int number, int deegre) {
	int power = 1;

	for ( ; deegre > 0; deegre--) {
		power *= number;
	}


	return power;
}

int main () {
	int num = 0;
	int po;

	printf("Enter a number and power:");
	scanf("%d %d", &num, &po);

	printf("%d\n", power(num, po));

	return 0;
}
