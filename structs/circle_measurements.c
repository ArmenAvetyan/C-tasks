#include <stdio.h>
#define PI 3.1415

typedef struct {

    float radius;

}Circle;

int main () {
    Circle x;

    printf("Enter the radius of the circle: ");
    scanf("%f", &x.radius);

    float circumference = 2 * PI * x.radius;
    float area = PI * x.radius * x.radius;

    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
