#include <stdio.h>

char is_alpha (char ch) {
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		printf("It is letter!\n");
	} else {
		printf("It is not letter!\n");
	}

	return ch;

}

int main () {
	char letter = '\0';

	printf("Enter a letter:");
	scanf("%c", &letter);

	is_alpha(letter);

	return 0;
}
