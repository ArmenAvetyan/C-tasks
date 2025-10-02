#include <stdio.h>

typedef union {
    float usd;
    float eur;
}Currency;

int main () {
    Currency u;

    u.usd = 5;

    printf("After assign USD\n");
    printf("USD: %f\n", u.usd);
    printf("EUR: %f\n\n", u.eur);

    u.eur = 9;

    printf("After assign EUR\n");
    printf("USD: %f\n", u.usd);
    printf("EUR: %f\n", u.eur);

    return 0;
}
