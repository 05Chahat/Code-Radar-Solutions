#include <stdio.h>

void main() {
    double a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double sum = (a+b+c)/3;
    printf("Average: %.2lf",sum);
    return 0;
}