
#include <stdio.h>

void printNumberPyramid(int n) {
    int i, j, space;
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
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
