#include <stdio.h>

int main() {
    int choice;
    float temperature;

    printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        printf("Temperature in Celsius: %.2f\n", (5.0 / 9.0) * (temperature - 32));
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        printf("Temperature in Fahrenheit: %.2f\n", (9.0 / 5.0) * temperature + 32);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
