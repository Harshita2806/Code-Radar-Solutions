#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime\n");
    } else {
        int i;
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                printf("Not Prime\n");
                break;
            }
        }
        if (i > n / 2) {
            printf("Prime\n");
        }
    }

    return 0;
}