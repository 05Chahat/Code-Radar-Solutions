#include <stdio.h>

int main() {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double sum = (a+b+c)/3;
    printf("Average: %.2lf",sum);
    return 0;
}