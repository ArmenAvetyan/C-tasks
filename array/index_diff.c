#include <stdio.h>

int main () {
	int arr[7] = {0};
	int max = 0;	
	int maxind = 0;
	int minind = 0;

	printf("Enter 7 intergers:");
	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
	}

	int min = arr[0];

	for (int i = 0; i < 7; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxind = i;
		} else if (arr[i] < min) {
			min = arr[i];
			minind = i;
		}
	}

	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
	printf("Index of max = %d\n", maxind);
	printf("Index of min = %d\n", minind);
	printf("Max and min index differenc is %d\n", maxind - minind);
	
	return 0;
}
