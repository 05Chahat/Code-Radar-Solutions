#include <stdio.h>

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for center alignment
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print the numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
