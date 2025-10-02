#include <stdio.h>

typedef union {

    int intValue;
    char charValue;

}Data;

int main () {
    Data a;

    a.intValue = 1212;

    printf("intValue = %d\n", a.intValue);
    printf("charValue = %d\n", a.charValue);

    return 0;
}
