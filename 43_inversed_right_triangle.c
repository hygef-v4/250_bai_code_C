#include <stdio.h>

int main() {
    int n;
    int i, j, k;
    
    printf("Enter the height of the inverted right triangle: ");
    scanf("%d", &n);

    // Loop to iterate over each row
    for (i = n; i >= 1; i--) {
        // Loop to print spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // Loop to print asterisks
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
