#include <stdio.h>

int main(){
	float C = 0;
	float F = 0;
	printf("Enter temperature in Celsius:");
	scanf("%f", &C);
	F = (C * 9/5) + 32;
	printf("Temperature in Fahrenheit: %f\n", F);

	return 0;
}
