#include <stdio.h>

int sumDigits(int *num) {
    int number = *num;
    int sum = 0, t;
    while (number >= 1) {
        t = number % 10;
        number = number / 10;
        sum += t;
    }
    // sum += t;
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sumDigits(&n));
    return 0;
}