#include <stdio.h>

typedef struct {

    float celsius;
    float fahrenheit;

}Temperature;

int main () {
    Temperature x;

    printf("Enter tempertature in Celsius: ");
    scanf("%f", &x.celsius);

    x.fahrenheit = (x.celsius * 9 / 5) + 32;

    printf("Temperature in Celsius: %.1f°C\n"
           "Temperature in Fahrenheit: %.1f°F\n", x.celsius, x.fahrenheit);


    return 0;
}
