
#include <stdio.h>

int main() {
    float amount, discount, finalAmount;

    
    printf("Enter total shopping amount: ");
    scanf("%f", &amount);

    
    if (amount > 5000) {
        discount = amount * 0.20;
    } else if (amount >= 3000 && amount <= 5000) {
        discount = amount * 0.10;
    } else {
        discount = 0.0;
    }

    
    finalAmount = amount - discount;

    
    printf("Final amount after discount: %f\n", finalAmount);

    return 0;
}