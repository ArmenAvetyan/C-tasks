#include<stdio.h>

int main(){

	int score = 0;
	int call_pass = 0;

	printf("Enter your exam score(0 to 100):");
	scanf("%i", &score);

	if (score < 0 || score > 100){
		printf("It is not correct score!\n");
		return 1;
	}
	if (score <= 50){
		call_pass = 0;
		printf("Your score is not good\n");
	} else{
		call_pass = 1;
		printf("Your score is good\n");
	}
	
	return 0;
}
