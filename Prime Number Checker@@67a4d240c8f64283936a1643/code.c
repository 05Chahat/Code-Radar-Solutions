// Your code here...
#include<stdio.h>
int main () {
    int isprime(int n, int count=0){
        for (int i=1; i<=n; i++){
            if (n%i==0){
                count++;
            }
            if (count==2){
                return 1;
            }
            else {
                return 0;
            }
        }
    }
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isprime(num));
    }
    return 0;
}