#include <stdio.h>
#include "enum.h"

void traffic () {
    Lights light;

    printf("Enter signal number: "
            "1.RED\n"
            "2.YELLOW\n"
            "3.GREEN\n");

    if (scanf("%d", &light) != 1) {
        printf("Invalid input\n");
        return;
    }

    switch (light) {
        case 1: printf("RED -> STOP\n"); break;
        case 2: printf("YELLOW -> READY\n"); break;
        case 3: printf("GREEN -> GO\n"); break;
        default: printf("Invalide signal\n");
    }
}

int main () {
    traffic();
    return 0;
}
