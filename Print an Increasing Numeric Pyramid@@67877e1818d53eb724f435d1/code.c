// Your code here...
#include <stdio.h>
void printNumberPyramid(int n) {
    int num = 1; // Starting number
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for center alignment
        for (int space = 1; space <= n - i; space++) {
            printf("  "); // Two spaces for better alignment
        }
        // Print the numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    scanf("%d", &rows);
    printNumberPyramid(rows);
    return 0;
}
