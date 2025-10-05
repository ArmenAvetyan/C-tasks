#include <stdio.h>
#include "enum.h"

void seasons_s () {
    int month = 0;
    Season seasons;

    printf("Enter month number:\n"
            "1.JANUARY\n"
            "2.FEBRUARY\n"
            "3.MARCH\n"
            "4.APRIL\n"
            "5.MAY\n"
            "6.JUNE\n"
            "7.JULY\n"
            "8.AUGUST\n"
            "9.SEPTEMBER\n"
            "10.OCTOBER\n"
            "11.NOVEMBER\n"
            "12.DECEMBER\n");
   
    if (scanf("%d", &month) != 1) {
        printf("Invalid input\n");
        return;
    }

    if (month == 1 || month == 2 || month == 12) {
        seasons = 0;
    } else if (month == 3 || month == 4 || month == 5) {
        seasons = 1;
    } else if (month == 7 || month == 6 || month == 8) {
        seasons = 2;
    } else if (month == 9 || month == 10 || month == 11) {
        seasons = 3;
    } else {
        printf("Invalid month\n");
        return;
    }

    switch (seasons) {
    case 0: printf("Season: WINTER\n"); break;
    case 1: printf("Season: SPRING\n"); break;
    case 2: printf("Season: SUMMER\n"); break;
    case 3: printf("Season: FALL\n"); break;
    }
}

int main () {
    seasons_s ();
}
