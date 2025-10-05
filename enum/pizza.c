#include <stdio.h>
#include "enum.h"

void pizza_size () {
    int price[] = {10, 20, 30, 37};
    const char* names[] = {"SMALL", "MEDIUM", "LARGE", "EXTRA LARGE"};
    Psize pname;

    printf("Enter number of pizza:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d.%s = %d$\n", i, names[i], price[i]);
    }

    if (scanf("%d", &pname) != 1) {
        printf("Invalid input\n");
        return;
    } 
    
    if (pname >= 0 && pname < 4) {
        printf("%s %d$\n", names[pname], price[pname]);
    }
}

int main () {
    pizza_size();
    return 0;
}
