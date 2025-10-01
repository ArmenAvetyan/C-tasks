#include <stdio.h>

typedef struct {
    int age;
    float height;
}Person;

int main () {
    Person a[2];

    printf("Enter first man age and height: ");
    scanf("%d %f", &a[0].age, &a[0].height);

    printf("Enter second man age and height: ");
    scanf("%d %f", &a[1].age, &a[1].height);

    a->age > (a + 1)->age ? printf("Older is 1 person\n") : 
    a->age < (a + 1)->age ? printf("Older is 2 person\n") :
                            printf("They are the same age\n");

    return 0;
}
