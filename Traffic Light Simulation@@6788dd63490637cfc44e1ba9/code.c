#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if (c=='R'){
        printf("Stop");
    }
    else if(c=='G') {
        printf("Go");
    }
    else if (c=='Y') {
        printf("Slow Down");
    }
    else {
        printf("Invalid input");
    }
}