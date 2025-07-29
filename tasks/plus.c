#include <stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int sum = 0;
	printf("Enter two numbers:");
	scanf("%i %i", &x, &y);
	sum = x + y;
	printf("sum: %i\n", sum);

	return 0;
}
