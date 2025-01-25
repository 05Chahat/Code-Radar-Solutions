#include <stdio.h>
int main() {
    int n,sum;
    sum=0;
    scanf("%d",&n);
    for (int i=1; i<=n ;i+=1) {
        sum+=i;
    }
    printf("%d",sum);
}