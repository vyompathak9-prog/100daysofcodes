#include <stdio.h>

int main() {
    int n, digit, count[10] = {0}, i, max = 0, result = 0;

    scanf("%d", &n);

    if(n == 0)
        count[0]++;

    if(n < 0)
        n = -n;

    while(n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
