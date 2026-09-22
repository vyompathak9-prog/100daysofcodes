#include <stdio.h>

int main() {
    long long n, result = 0, place = 1, digit;

    scanf("%lld", &n);

    if(n == 0) {
        printf("1");
        return 0;
    }

    while(n > 0) {
        digit = n % 10;
        result += (1 - digit) * place;
        place *= 10;
        n /= 10;
    }

    printf("%lld", result);

    return 0;
}
