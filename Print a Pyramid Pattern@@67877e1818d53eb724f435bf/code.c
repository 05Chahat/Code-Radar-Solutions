#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf(" ");
        for (int j=1;j<=i;j++){
            printf(" ");
        }
        for (int k=1;k<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}