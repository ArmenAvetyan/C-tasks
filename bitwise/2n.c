#include <stdio.h>

int main(){
	int num = 0;
	printf("Enter number:");
	scanf("%d", &num);
	int n2 = 0;
	n2 = 1 << num;
	printf("2in %dth degree is %d\n", num, n2);

	return 0;
}
