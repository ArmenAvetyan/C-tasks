#include <stdio.h>

typedef struct {

    int length;
    int width;

} Rectangle;

int area (Rectangle* r);
int perimeter(Rectangle* r);

int main () {

    Rectangle r1;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &r1.length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &r1.width);

    printf("Rectangle Area: %d\n", area(&r1));
    printf("Rectangle Perimeter: %d\n", perimeter(&r1));

    return 0;
}

int area (Rectangle* r) {
    return r->length * r->width;
}

int perimeter(Rectangle* r) {
    return 2 * (r->length + r->width);
}
