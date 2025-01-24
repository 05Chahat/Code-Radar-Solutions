#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if (char c>='A'&& c<='Z'){
            printf("Uppercase");
    }
    else if (char c>='a' && c<='z'){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    }
