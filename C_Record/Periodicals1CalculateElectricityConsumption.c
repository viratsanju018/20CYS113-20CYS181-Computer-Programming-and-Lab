#include <stdio.h>

int main() {
    char name[50], ebNumber[20];
    int units, bill = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter name of the consumer: ");
        scanf("%s", name);
        printf("Enter EB number: ");
        scanf("%s", ebNumber);
        printf("Enter units consumed: ");
        scanf("%d", &units);

        if (units <= 100) {
            bill = 0;
        } else if (units <= 400) {
            bill = (units - 100) * 225 / 100;
        } else if (units <= 500) {
            bill = 300 * 225 / 100 + (units - 400) * 450 / 100;
        } else if (units <= 600) {
            bill = 300 * 225 / 100 + 100 * 450 / 100 + (units - 500) * 600 / 100;
        } else {
            bill = 300 * 225 / 100 + 100 * 450 / 100 + 100 * 600 / 100 + (units - 600) * 800 / 100;
        }

        printf("Electricity bill for %s with EB number %s is %d INR\n", name, ebNumber, bill);
    }

    return 0;
}
