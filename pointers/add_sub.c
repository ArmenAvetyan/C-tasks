#include <stdio.h>

int main () {
	int a = 12;
	int b = 34;

	int* pa = &a;
	int* pb = &b;

	printf("%d\n", *pa - *pb);
	printf("%d\n", *pa + *pb);

	return 0;
}
