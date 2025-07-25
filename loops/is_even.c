#include <stdio.h>

int main(){

	int x = 0;
	char* is_even; 
	printf("Enter a number:");
	scanf("%i", &x);

	if(x % 2 == 0){
	is_even = "Number is even";
	} else {
	is_even = "Number is odd";
	}

	printf("%s\n", is_even);
	return 0;
}
