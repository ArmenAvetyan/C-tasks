#include <stdio.h>
#define pi 3.141592653589793238

int main(){
	double r = 0;
	printf("Enter radius:");
	scanf("%lf", &r);
	double area = 0;
	area = pi * r * r;
	printf("Area: %f\n", area);

	return 0;
}
