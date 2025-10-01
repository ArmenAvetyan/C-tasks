#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;

}Point;

int main () {
    Point a[2];

    printf("Enter first point's x: ");
    scanf("%f", &a[0].x);
    printf("Enter first point's y: ");
    scanf("%f", &a[0].y);

    printf("Enter second point's x: ");
    scanf("%f", &a[1].x);
    printf("Enter second point's y: ");
    scanf("%f", &a[1].y);

    //Euclidean distance
    float distance = sqrtf(((a + 1)->x - a->x) * ((a + 1)->x - a->x) + ((a + 1)->y - a->y) * ((a + 1)->y - a->y));

    printf("The distance is %.2f\n", distance);

    return 0;
}
