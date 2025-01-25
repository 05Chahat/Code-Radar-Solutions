#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i+=1){
        printf("%d",i);
    }
    return 0;
}