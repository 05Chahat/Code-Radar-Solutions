#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if ((a%2==0 && a!=2 && a<=7 && a<=12) || (a%2!=0 && a>=8 && a<=12)){
        printf("30");
    }
    else if (a==2){
            printf("28");
        }
    else if ((a%2!=0 && a<=7) || (a%2==0 && a>=8)) {
        printf("31");
    }
    else {
        printf("Invalid month");
    }
}