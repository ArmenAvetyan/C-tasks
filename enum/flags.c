#include <stdio.h>
#include "enum.h"

void flags() {
    Perm perm;
    printf("Input a number with combined permissions(e.g., 3 - READ + WRITE): ");
    if (scanf("%d", &perm) != 1) {
        printf("Invalid input\n");
    }

    if (perm < 0 || perm > 7) {
        printf("Invalid permission\n");
        return;
    }

    if (perm & 1)
        printf("READ ");
    if (perm & 2)
        printf("WRITE ");
    if (perm & 4)
        printf("EXECUTE ");
    if (!(perm & (1|2|4)))
        printf("NONE");
        printf("\n");
}

int main () {
    flags();
    return 0;
}
