#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Prompt the user for input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover whitespace

    // Perform the calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) { // Check for division by zero
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}