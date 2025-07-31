#include <stdio.h>

int main() {
    int x[10];
    printf("Enter 10 numbers (integers): ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &x[i]);
    }

	
    for (int i = 0; i < 9; i++) {
    	for (int j = 0; j < 9 - i; j++) {
        	if (x[j] > x[j + 1]) {
      	     	int temp = x[j];
           	x[j] = x[j + 1];
            	x[j + 1] = temp;
        	}
    	}
    }

    for (int k = 0; k < 10; k++) {
        printf("%d ", x[k]);
    }
    printf("\n");

    return 0;
}
