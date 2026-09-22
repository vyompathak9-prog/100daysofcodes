#include <stdio.h>

int main() {
    int n, i;
    float sum = 1;

    scanf("%d", &n);

    for(i = 2; i <= n; i++)
        sum += (float)(2 * i - 1) / (2 * i - 2);

    printf("%.2f", sum);

    return 0;
}
