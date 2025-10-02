#include <stdio.h>

typedef union {

    float floatValue;
    int intValue;

}Value;

int main () {
    Value a;

    printf("Enter a number(float): ");
    scanf("%f", &a.floatValue);

    printf("floatValue is %f\n", a.floatValue);
    printf("intValue is %d\n", a.intValue);

    return 0;
}
