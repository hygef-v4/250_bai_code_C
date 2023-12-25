#include <stdio.h>

int main(void) {
    // Import height from 1 to 10
    int height;

    do {
        printf("Enter height (1-10): ");
        scanf("%d", &height);
    } while (height > 10 || height < 1);

    // Right triangle
    printf("Right Triangle:\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Left triangle
    printf("\nLeft Triangle:\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - (i + 1); j++) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Full triangle
    printf("\nFull Triangle:\n");
    for (int i = 0; i < height; i++) {
        // Left side
        for (int j = 0; j < height - (i + 1); j++) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {
            printf("*");
        }

        printf(" "); // Separator

        // Right side
        for (int r = 0; r < i + 1; r++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
