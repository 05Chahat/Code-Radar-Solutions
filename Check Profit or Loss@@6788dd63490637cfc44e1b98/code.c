#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if (cp>sp){
        printf("Loss");
    }
    else if (cp<sp) {
        printf("Profit");
    }
    else {
        printf("No Profit No Loss");
    }
}