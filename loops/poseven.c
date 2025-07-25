#include <stdio.h>

int main(){
	int num = 0;
	int is_positive_and_even = 0;

	printf("Enter a number:");
	scanf("%i", &num);

	if (num > 0){
		is_positive_and_even = 1;

		if (num % 2 == 0)
		{
			printf("Number is positive and even\n");
		} else {
			printf("Number is not even!\n");
		}
	} else {
		is_positive_and_even = 0;
		printf("Number is not positive!\n");
	}

	return 0;
}
