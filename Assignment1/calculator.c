#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Calculations
    printf("\n--- RESULTS ---\n");
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    return 0;
}
