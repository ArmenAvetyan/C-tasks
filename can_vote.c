#include <stdio.h>

int main(){
	int age = 0;
	int can_vote = 0;

	printf("Enter your age for vote:");
	scanf("%d", &age);
	
	if (age < 0){
	printf("It is not correct age!\n");
	return 1;
	}
	if (age < 18 & age > 0){
		can_vote = 0;
		printf("You can not vote\n");
	} else{
		can_vote = 1;
		printf("You can vote\n");
	}

	return 0;
}
