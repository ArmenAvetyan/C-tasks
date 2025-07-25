#include <stdio.h>

int main(){
	char sub = 0;
	int rating = 0;

	printf("Enter a subject:");
	scanf("%s", &sub);

	printf("Enter your rating:");
	scanf("%d", &rating);

	if (rating >= 90 && rating <= 100) {
		printf("Class A\n");
	} else if (rating >= 80 && rating <= 89) {
		printf("Class B\n");
	} else if (rating >= 70 && rating <= 79) {
		printf("Class C\n");
	} else if (rating >= 60 && rating <= 69) {
		printf("Class D\n");
	} else if (rating > 0 && rating < 60) {
		printf("Class E\n");
	} else {
		printf("Rating in not correct!\n"); 
	}

	return 0;
}
