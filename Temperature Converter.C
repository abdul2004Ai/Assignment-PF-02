

#include <stdio.h>

int main() {
    float temperature, convertedTemperature;
    char choice;

    // Ask the user for the conversion choice
    printf("Enter 'C' to convert from Fahrenheit to Celsius or 'F' to convert from Celsius to Fahrenheit: ");
    scanf(" %c", &choice);

    // Perform conversion based on user's choice
    if (choice == 'C' || choice == 'c') {
        // Convert from Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", convertedTemperature);
    } else if (choice == 'F' || choice == 'f') {
        // Convert from Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", convertedTemperature);
    } else {
        printf("Invalid choice! Please enter 'C' or 'F'.\n");
    }

    return 0;
}
