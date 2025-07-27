#include <stdio.h>

int main () {
	int x = 1;

	char* px = (char*)&x;
	printf("%d\n", *px);
	
	if (*px == 1) {
		printf("Little endian\n");
	}

	return 0;	
}
