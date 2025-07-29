#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	printf("Enter two entegers:");
	scanf("%i %i", &x, &y);
	int remainder = 0;
	remainder = x % y;
	printf("Remainder: %d\n", remainder);

	return 0;
}
