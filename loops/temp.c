#include <stdio.h>

int main(){
	int temp = 0;
	int is_cold = 0;
	
	printf("Enter a temperature (in Celsius):");
	scanf("%i", &temp);

	if(temp < 15){
	is_cold = 0;
	printf("Temperature is cold\n");
	} else {
	is_cold = 1;
	printf("Temperature is good\n");
	}

	return 0;
}
