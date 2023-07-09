#include <stdio.h>

int isPrime(int num) {
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void generatePrimes(int start, int end) {
    int i;
    printf("Prime numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    generatePrimes(start, end);
    return 0;
}
