#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%a",&a);
    if (a > 0)
    printf("Positive");
    if (a == 0)
    printf("Zero");
    else
    printf("Negative");
    return 0;
}