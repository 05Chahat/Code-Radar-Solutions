#include <stdio.h>
int main() {
    double a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if (c=='+') {
        printf("%.0f",a+b);
    }
    else if (c=='-') {
        printf("%.0f",a-b);
    }
    else if (c='*') {
        printf("%.0f",a*b);
    }
    else if (c=='/') {
        printf("%.0f",a/b);
    }
    else {
        printf("Error");
    }
    return 0;
}