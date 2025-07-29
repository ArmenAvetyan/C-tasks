#include <stdio.h>

int main () {
	int x[5] = {0};
	int a = 0;

	printf("Enter 5 intergers:");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &x[i]);
	}
	
	printf("Enter a number:");
	scanf("%d", &a);

	int found = 0;
	for (int i = 0; i < 5; i++) {
		if (a == x[i]) {
			found = 1;
			break;
		}
	}

	switch (found) {
		case 1:
			printf("YES\n");
			break;
		case 0:
			printf("NO\n");
			break;
	}


	return 0;
}
