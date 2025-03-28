// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int count_e, count_o;
    for (int i=0; i<n; i++){
        if (a[i]%2==0){
            count_e++;
        }
        else if (a[i]%2!=0){
            count_o++;
        }
    }
    printf("%d %d", count_e, count_o);
}