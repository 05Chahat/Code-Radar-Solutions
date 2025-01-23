#include <stdio.h>

void main() {
    double a,b,c;
    float sum;
    scanf("%d %d %d",&a,&b,&c);
    double sum = (a+b+c)/3;
    printf("Average: %.2f",sum);
    return 0;
}