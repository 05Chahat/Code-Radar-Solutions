#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for center alignment
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print the ascending part of the row
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print the descending part of the row
        for (int j = i - 1; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
