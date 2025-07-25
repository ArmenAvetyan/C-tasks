#include <stdio.h>

int main(){
	char name[6] = "admin";
	int is_admin = 0;

	printf("Enter your username:");
	scanf("%5s", name);

	if (name[0] != 'a' ||
		name[1] != 'd' ||
		name[2] != 'm' ||
		name[3] != 'i' ||
		name[4] != 'n' ||
		name[5] != '\0'
	){
		is_admin = 0;
		printf("It is not correct username!\n");
	} else {
		is_admin = 1;
		printf("You are right\n");
	}

	return 0;
}
