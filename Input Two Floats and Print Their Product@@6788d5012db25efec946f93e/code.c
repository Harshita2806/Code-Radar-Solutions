#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float n,n1;
    scanf("%f%f",&n,&n1);
    float product;
    product = n*n1;
    printf("Product: %f", product);
    return 0;
}