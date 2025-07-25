#include <stdio.h>

int main () {
	char sign = '\0';
	int a = 0;
	int b = 0;

 	printf("Enter an arithmetic operation or 'q' to quit the program\t");
	scanf(" %c", &sign);
	while (sign != 'q') {
		printf("Enter two numbers:");
		scanf("%d %d", &a, &b);

		switch (sign) {
			case '+':
				printf("Sum = %d\n", a + b);
				break;
			case '-':
				printf("Defference = %d\n", a - b);
				break;
			case '*':
				printf("Product = %d\n", a * b);
				break;
			case '/':
				if (b != 0) {
					printf("Division = %d\n", a /b);
				} 
				break;
		} 
		printf("Enter an arithmetic operation or 'q' to quit the program\t");
		scanf(" %c", &sign);
	}

	return 0;
}
