#include <stdio.h>

void celsius_to_fahrenheit(float c);
void celsius_to_kelvin(float c);
void fahrenheit_to_celsius(float f);
void kelvin_to_celsius(float k);

int main() {
    int choice;
    float temp;

    while (1) {
        printf("\n=== Temperature Converter by Austin!\n");
        printf("1. Celsius --> Fahrenheit\n");
        printf("2. Celsius --> Kelvin\n");
        printf("3. Fahrenheit --> Celsius\n ");
        printf("4. Kelvin --> Celsius\n ");
        printf("5. Exit\n");

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
    printf("%.2f °C = %.2f °F\n", c,f);
}

void celsius_to_kelvin(float c) {
    float k = c + 273.15;
    printf("%.2f °C = %.2f K\n",k,c);
}

void fahrenheit_to_celsius(float f) {
    float c = (f - 32) * 5.0 / 9.0;
    printf("%.2f °F = %.2f °C\n", f,c);
}

void kelvin_to_celsius(float k) {
    if (k < 0) {
        printf("Error:Kelvin cannot be negative!\n");
        return;
    }
    float c = k - 273.15;
    printf("%.2f K = %.2f °C\n",k,c);
}
