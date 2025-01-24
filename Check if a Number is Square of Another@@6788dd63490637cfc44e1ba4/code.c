#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (b==pow(a,2)){
        printf("Yes");
    }
    else {
        printf("No")
    }
}