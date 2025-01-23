#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if (n>0) {
        printf("Positive");
    }
    else if (n<0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }
}