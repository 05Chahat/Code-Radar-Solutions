#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i+=1) {
        for (int j=1; j<=i; j+=1){
            printf("* ");
        }
        printf("\n");
    }
}