#include <stdio.h>

typedef union {

    int length;
    float weight;

}Measurement;

typedef enum {

    Length = 1,
    Weight = 2

}Types;

int main () {
    Measurement a;
    Types type;

    printf("Choose that you want to enter(1.length or 2.weight): ");
    scanf("%d", &type);

    switch (type) {
        case 1:
            printf("Enter length (int): ");
            scanf("%d", &a.length);
            printf("You entered %d\n", a.length);
            break;
                
        case 2:
            printf("Enter weight (float): ");
            scanf("%f", &a.weight);
            printf("You entered %f\n", a.weight);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
