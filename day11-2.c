#include <stdio.h>

int main() {
    float cp, sp, percent;

    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", percent);
    }
    else if (cp > sp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", percent);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
