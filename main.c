#include <stdio.h>

void celsius_to_fahrenheit(float c);
void celsius_to_kelvin(float c);
void fahrenheit_to_celsius(float c);
void kelvin_to_celsius(float c);

int main() {
    int choice;
    float temp;

    while (1) {
        printf("\n=== Temperature Converter by Austin!");
        printf("1. Celsius --> Fahrenheit\n");
        printf("2. Celsius --> Kelvin\n");
        printf("3. Fahrenheit --> Celsius\n ");
        printf("4. Kelvin --> Celsius ");
        printf("5.Exit\n");

        // read menu
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Try again!");
        }

        // read temperature of room 
        printf("Enter temperature: ");
        scanf("%f", &temp);

        switch (choice) {
            case 1: celsius_to_fahrenheit(temp); break;
            case 2: celsius_to_kelvin(temp); break;
            case 3: fahrenheit_to_celsius(temp); break;
            case 4: kelvin_to_celsius(temp); break;
        }

    }
    return 0;
}

void celsius_to_fahrenheit(float c) {
    float f = c * 9.0 / 5.0 + 32;
    printf("Fahrenheit: ", c,f);
}

void celsius_to_kelvin(float c) {
    float k = c + 273.15;
    printf("Kelvin: ",k,c);
}
