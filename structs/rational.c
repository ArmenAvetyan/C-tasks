#include <stdio.h>

typedef struct {

    int numerator;
    int denominator;

}Rational;

int main () {
    Rational a;
    Rational b;
    Rational sum;
    Rational product;

    printf("Enter first rational number (numerator, denominator): ");
    scanf("%d %d", &a.numerator, &a.denominator);

    if (a.denominator == 0) {
        printf("Error: Denominator cannot be zero.\n");
        return 1;
    }

    printf("Enter second rational number (numerator, denominator): ");
    scanf("%d %d", &b.numerator, &b.denominator);

    if (b.denominator == 0) {
        printf("Error: Denominator cannot be zero.\n");
        return 1;
    }

    sum.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    sum.denominator = a.denominator * b.denominator;

    product.numerator = a.numerator * b.numerator;
    product.denominator = a.denominator * b.denominator;

    printf("Sum is %d/%d\n", sum.numerator, sum.denominator);
    printf("Product is %d/%d\n", product.numerator, product.denominator);

    return 0;
}
