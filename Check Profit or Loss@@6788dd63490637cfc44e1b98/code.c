#include <stdio.h>



int main() {
    int sp , cp, result;
    scanf("%d %d",&sp,&cp);
    result = sp - cp;
    if (result > 0){
    printf("Profit\n");}
    else if (result < 0){
    printf("Loss\n");}
    else{
    printf("No Profit No Loss\n");}
    return 0;
}