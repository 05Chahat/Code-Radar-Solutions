#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if (a%2==0) {
        printf("30");
    }
    else if (a==2){
            printf("28");
        }
    
    else {
        printf("31");
    }
}