#include <stdio.h>

typedef struct {

    float weight;
    float height;

}Person;

float BMI (Person* a);
void BMI_category (float c);

int main () {
    Person a;

    printf("Enter height(cm): ");
    scanf("%f", &a.height);

    printf("Enter weight(kg): ");
    scanf("%f", &a.weight);

    float bmi = BMI(&a);
    printf("Body mass index: %.1f\t", bmi);

    BMI_category(bmi);

    return 0;
}

float BMI (Person* a) {
    float height_m = a->height / 100;
    return a->weight / (height_m * height_m);
}

void BMI_category (float c) {
    if (c < 18.5) {
        printf("<Underweight>\n");
    } else if (c < 24) {
        printf("<Normal>\n");
    } else if (c < 28) {
        printf("<Overweight>\n");
    } else {
        printf("<Obese>\n");
    }
}
