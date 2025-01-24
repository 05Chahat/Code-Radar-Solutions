#include <stdio.h>
int main() {
    double a,b;
    char c;
    scanf("%.1f %.1f %c",&a,&b,&c);
    if (c=='+') {
        printf("%.1f",a+b);
    }
    else if (c=='-') {
        printf("%.1f",a-b);
    }
    else if (c='*') {
        printf("%.1f",a*b);
    }
    else if (c=='/') {
        printf("%.1f",a/b);
    }
    else {
        printf("Error");
    }
    return 0;
}