#include <stdio.h>

int main(){
	char letter = 0;
	char result = 0;
	printf("Enter text in lower letter:");
	scanf("%c", &letter);
	result = letter - 32;
	printf("%c\n", result);

	return 0;
}
