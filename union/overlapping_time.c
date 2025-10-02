#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
} Min_hour;

typedef struct {
    float totalHours;
}Tot_hour;

typedef union {
    Min_hour minHour;
    Tot_hour totHour;
}Time;

int main () {
    Time t;

    printf("Enter huors and minutes: ");
    scanf("%d %d", &t.minHour.hours, &t.minHour.minutes);

    printf("Hours and Minutes: %d : %d\n", t.minHour.hours, t.minHour.minutes);
    printf("Total Hours: %f\n", t.totHour.totalHours);

    return 0;
}
