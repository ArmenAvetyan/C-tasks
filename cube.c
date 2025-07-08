#include <stdio.h>

int main(){
	double x = 0;
	printf("Enter a number:");
	scanf("%lf", &x);
	int cube = 0;
	cube = x * x * x;
	printf("Cube: %d\n", cube);

	return 0;
}
