// Your code here...
#include <stdio.h>

void printDiamond(int n) {
    int i, j, space;
    // Print the top half of the diamond
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Print the bottom half of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the top half of the diamond: ");
    scanf("%d", &rows);

    printDiamond(rows);

    return 0;
}
