#include <stdio.h>

int main(){
	int num = 0;
	printf("Enter number:");
	scanf("%d", &num);
	printf("%d\n", ~num + 1);

	return 0;
}
