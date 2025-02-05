#include <stdio.h>


int main() {
    int a , b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);

    switch(ch){
        case '+':
        printf("%d", a + b);
        case '-':
        printf("%d",a - b);
        case '*':
        printf("%d",a*b);
        case '/':
        if (b == 0)
        printf("Error");
        else
        printf("%d", a / b);
        default:
        printf("Error");
    }
    
    return 0;
}