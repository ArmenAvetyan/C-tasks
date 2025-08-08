#include <stdio.h>
int sum_digit (int num);

int main () {
	int n = 0;

	printf("Enter a number:");
	scanf("%d", &n);

	printf("%d\n", sum_digit(n));

	return 0;
}

int sum_digit (int num) {
	if (num == 0) return 0;
	if (num <= 10) return num;

	if (num < 0) {
		num = -num;
	}

	return(num % 10) + sum_digit(num / 10);

}
