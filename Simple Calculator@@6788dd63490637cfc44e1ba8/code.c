#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if (c=='+') {
        printf("%.0f",a+b);
    }
    else if (c=='-') {
        printf("%.0f",a-b);
    }
    else if (c=='*') {
        printf("%.0f",a*b);
    }
    else if (c=='/') {
        if(b!=0){
        printf("%.0f",a/b);}
        else {
            printf("error");
        }
    }
    else {
        printf("Invalid");
    }
}