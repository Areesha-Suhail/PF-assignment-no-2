
#include <stdio.h>

int main()
 {
    float num1, num2;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter second number: ");
    scanf("%f", &num2);

    
    if (operation == '+') {
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    } else if (operation == '-') {
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    } else if (operation == '*') {
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    } else if (operation == '/') {
        if (num2 != 0) {
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        } else {
            printf("Error: Division by zero!\n");
        }
    } else {
        printf("Error: Invalid operation!\n");
    }

    return 0;
}
