#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Get user input for two numbers and an operator
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Perform the operation based on the operator and display the result
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator == '/') {
        if (num2 != 0) {  // Check for division by zero
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Cannot divide by zero.\n");
        }
    }
    else {
        printf("Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}