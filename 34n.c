#include <stdio.h>

int main(){
	int n = 0;
	int x = 34;
	printf("Enter number:");
	scanf("%d", &n);
	int res = 0;
	res = 1 << n | x;
	printf("%d\n", res);
	
	return 0;
}
