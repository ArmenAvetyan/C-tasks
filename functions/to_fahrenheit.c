#include <stdio.h>

float to_fahr (float c) {
	float f = (c * 9 / 5) +32;

	return f;

}

int main () {
	float num = 0;

	printf("Enter temperature in Celsius:");
	scanf("%f", &num);

	printf("Temperature in Fahrenheit: %f\n", to_fahr(num));

	return 0;
}
