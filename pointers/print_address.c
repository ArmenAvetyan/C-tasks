#include <stdio.h>

int main () {
	char a = 1;
	int b = 4;
	double c = 3.1416;

	char* pa = &a;
	printf("%p\n", &a);
	printf("%p\n\n", pa);

	int* pb = &b;
	printf("%p\n", &b);
	printf("%p\n\n", pb);

	double* pc = &c;
	printf("%p\n", &c);
	printf("%p\n", pc);

	return 0;
}
