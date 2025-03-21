#include<stdio.h>
int fab(int a=0, int b=1, int c, int x){
    for (int i=1; i<=x; i++){
        printf("%d ",x);
        x=a;
        a=b;
        b=c;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    if (n<=0){
        printf("Invalid input\n");
        return 0;
    }
    printf("%d",fab(n));
}