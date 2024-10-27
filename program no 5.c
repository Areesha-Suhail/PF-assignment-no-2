
#include <stdio.h>

int main()
 {
    int choice;
    float temp, convertedTemp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    
    printf("Enter temperature value: ");
    scanf("%f", &temp);

    if (choice == 1) {
        convertedTemp = (temp * 9 / 5) + 32;
        printf("%f Celsius is equal to %f Fahrenheit.\n", temp, convertedTemp);
    } else if (choice == 2) {
        convertedTemp = (temp - 32) * 5 / 9;
        printf("%f Fahrenheit is equal to %f Celsius.\n", temp, convertedTemp);
    } else {
        printf("Invalid choice. Please try again.\n");
    }

    return 0;
}