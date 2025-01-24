#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=pow(a,2);
    if (a==c){
        printf("Yes");
    }
    else {
        printf("No");
    }
}