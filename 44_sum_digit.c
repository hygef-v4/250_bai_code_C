#include <stdio.h>

int main() {
    int n, digit, sum = 0;
    
    printf("Enter an integer number: ");
    scanf("%d", &n);

    // Calculate sum of digits
    int originalNumber = n; // Store original number to display later
    while (n != 0) {
        digit = n % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        n /= 10; // Move to the next digit
    }

    // Print the result
    printf("The sum of digits in %d is %d\n", originalNumber, sum);

    return 0;
}
