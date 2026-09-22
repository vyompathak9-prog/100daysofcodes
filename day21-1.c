#include <stdio.h>

int main() {
    int n, first, last, digits = 1, power = 1, middle, result;

    scanf("%d", &n);

    if(n < 10) {
        printf("%d", n);
        return 0;
    }

    last = n % 10;

    while(n / power >= 10) {
        power *= 10;
        digits++;
    }

    first = n / power;
    middle = (n % power) / 10;
    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}
