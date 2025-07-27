#include <stdio.h>

int main () {
	char c1 = 0;
	char c2 = 0;
	short sh = 0;
	int d = 0;

	printf("Enter two chars and one short:");
	scanf("%hhd", &c1);
	scanf("%hhd", &c2);
	scanf("%hd", &sh);

	unsigned char* p = (unsigned char*)&d;

	p[0] = (unsigned char)c1;
	p[1] = (unsigned char)c2;

	short* psh = (short*)(p + 2);
	*psh = sh;

	 printf("d = %d\n", d);
	return 0;
}
