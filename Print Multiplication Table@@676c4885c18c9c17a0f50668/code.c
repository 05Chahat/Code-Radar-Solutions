#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1; i<=10;i+=1) {
        int a=n*i;
        printf("%d x %d = %d",n,i,a);
    }
    return 0;
}