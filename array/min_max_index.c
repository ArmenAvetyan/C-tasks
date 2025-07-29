#include <stdio.h>
#include <string.h>
  
int main () {
        int num[5] = {0};
        int max = num[0];
	int index = 0;  

        printf("Enter 5 integer:");
        for (int i = 0; i < 5; i++) {
                scanf("%i", &num[i]);
        }
  
        int min = num[0];
  
        char x[4];
        printf("Enter (min/max):");
        scanf("%s", x);
  
        if (strcmp(x, "max") == 0) {
                for (int i = 0; i < 5; i++ ) {
                        if (num[i] > max) {
                                max = num[i];
				index = i;
                        }
                }
        printf("max = %d\n", max);
	printf("Index = %d\n", index);  

        } else if (strcmp(x, "min") == 0) {
                for (int i = 0; i < 5; i++) {
                        if (num[i] < min) {
                                min = num[i];
				index = i;
                        }
                }
        printf("min = %d\n", min);
	printf("Index = %d\n", index);
        }
  
        return 0;
}

