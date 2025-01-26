#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for (int i<=n; i=1; i-=1){
        for (int j<=i; j<=1; j-=1){
            printf("*");
        }
        printf("\n");
    }
}