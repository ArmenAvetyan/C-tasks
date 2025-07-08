#include <stdio.h>

int main(){
	int n = 0;
	int x = 34;
	printf("Enter number:");
	scanf("%d", &n);
	int cln = 0;
	cln = x & ~(1 << n); 
	printf("%d\n", cln);

	return 0;
}
