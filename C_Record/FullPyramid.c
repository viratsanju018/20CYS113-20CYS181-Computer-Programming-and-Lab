#include <stdio.h>

int main()
{
    int rows, i, j, space;

    scanf("%d", &rows);

    if (rows <= 0 || rows >= 25) {
        printf("Invalid Input\n");
        return 0;
    }

    for (i = 1; i <= rows; i++) {
        for (space = i; space < rows; space++) {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
