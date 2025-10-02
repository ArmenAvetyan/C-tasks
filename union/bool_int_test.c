#include <stdio.h>

typedef union {

    int number;
    char flag;

}Flag;

int main () {
    Flag a;

    printf("Enter a number (int): ");
    scanf("%d", &a.number);

    printf("Number = %d\n", a.number);
    printf("ASCII of first byte is %d\n", a.flag);
    printf("Flag as char is <%c>\n", a.flag);


    return 0;
}
