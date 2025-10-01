#include <stdio.h>

typedef struct {

    float balance;
    int ownerID;

}Account;

int main () {
    Account a1[2];

    printf("Enter first owner ID: ");
    scanf("%d", &a1[0].ownerID);
    printf("Enter balance for '%d': ", a1[0].ownerID);
    scanf("%f", &a1[0].balance);

    printf("Enter second owner ID: ");
    scanf("%d", &a1[1].ownerID);
    printf("Enter balance for '%d': ", a1[1].ownerID);
    scanf("%f", &a1[1].balance);

    printf("First owner balance before transfer is %.1f\n"
           "Second owner balance before transfer is %.1f\n", a1[0].balance, a1[1].balance);

    float percent = a1->balance / 100 * 20;
    (a1 + 1)->balance += percent;
    a1->balance -= percent;

    printf("First owner balance after transfer is %.1f\n"
           "Second owner balance after transfer is %.1f\n", a1[0].balance, a1[1].balance);

    return 0;
}
