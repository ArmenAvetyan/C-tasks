#include <stdio.h>

int factorial (int number) {
	int num = 1;

	for (int i = 1; i <= number; i++) {
		num *= i; 	
	}	
	
	return num;

}

int main () {
	int num = 0;

	printf("Enter a number:");
	scanf("%d", &num);

	printf("%d\n", factorial(num));

	return 0;
}
