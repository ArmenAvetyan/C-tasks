#include <stdio.h>

typedef union {

    int intValue;
    float floatValue;

}Number;

int main () {
    Number a;

    a.intValue = 1674783848;

    printf("After assign intValue\n");
    printf("intValue = %d\n", a.intValue);
    printf("floatValue = %f\n\n", a.floatValue);

    a.floatValue = 2.9;

    printf("After assign floatValue\n");
    printf("intValue = %d\n", a.intValue);
    printf("floatValue = %f\n", a.floatValue);

    return 0;
}
