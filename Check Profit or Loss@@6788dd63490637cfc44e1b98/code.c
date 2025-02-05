#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int sp , cp, result;
    scanf("%d %d",&sp,&cp);
    result = sp - cp;
    if (result > 0)
    printf("Profit");
    else if (result < 0)
    printf("Loss");
    else
    printf("No Profit No Loss");
    return 0;
}