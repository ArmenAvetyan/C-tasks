#include <stdio.h>

int main(){
	float x = 0, y = 0, z = 0;
	printf("Enter three numbers:");
	scanf("%f %f %f", &x, &y, &z);
	float total = 0;
	total = x + y + z;
	printf("Total: %f\n", total);
	float average = 0;
	average = total / 3;
	printf("Average: %f\n", average);
	
	return 0;
}
