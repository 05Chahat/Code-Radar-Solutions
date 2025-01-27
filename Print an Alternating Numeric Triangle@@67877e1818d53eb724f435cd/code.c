#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        for (int j=0;j<i;j++) {
            printf("%d ",(i+j)%2);
        }
    printf("\n");
    }
}