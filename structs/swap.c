#include <stdio.h>

typedef struct {

    int a;
    int b;

}Pair;

int main () {
    Pair x;
    Pair y;

    printf("Enter a number in first element and in second element: ");
    scanf("%d %d", &x.a, &x.b);

    printf("First element is %d\n"
           "Second element is %d\n\n", x.a, x.b);

    y.a = x.b;
    y.b = x.a;

    x.a = y.a;
    x.b = y.b;

    printf("First element is %d\n"
           "Second element is %d\n", x.a, x.b);

    return 0;
}
