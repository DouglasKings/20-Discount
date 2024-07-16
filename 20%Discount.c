#include <stdio.h> // Include standard I/O library for input/output operations
#include <stdlib.h> // Include standard library for general purpose functions

// Function prototypes
// This declares the functions that will be defined later in the code
double calculateTheAmount(double unitPrice, double Discount); // Calculates the discount amount based on unit price and discount rate

int main() {
    char Name[100]; // Array to store the name of the item
    double Item, unitPrice, Discount = 0.2; // Variables to store the quantity of items, unit price, and discount rate

    printf("Enter the name of item bought: ");
    scanf("%99s", Name); // Limiting the size of the array to prevent buffer overflow
    printf("Enter the amount of item bought: ");
    scanf("%lf", &Item);
    printf("Enter the unit price of item bought: ");
    scanf("%lf", &unitPrice);

    // Calculate the total cost before discount
    double totalCostBeforeDiscount = Item * unitPrice; 
    // Calculate the discount amount
    double DiscountAmount = calculateTheAmount(unitPrice, Discount); 
    // Calculate the amount after discount
    double amountAfterDiscount = totalCostBeforeDiscount - DiscountAmount;

    // Print the details to the console
    printf("Name of items bought: %s\n", Name);
    printf("Items Bought: %.2lf\n", Item);
    printf("The Unit Price: %.2lf\n", unitPrice);
    printf("Discount Applied: %.2lf%%\n", Discount * 100);
    printf("Amount Paid After Discount: %.2lf\n", amountAfterDiscount);

    return 0; // End of the main function
}

// Function to calculate the discount amount
// This function calculates the discount amount based on the unit price and the discount rate
double calculateTheAmount(double unitPrice, double Discount) {
    // Calculate the total cost before discount
    double totalCostBeforeDiscount = unitPrice * Item; // Assuming Item is accessible here
    // Calculate the discount amount
    double discountAmount = totalCostBeforeDiscount * Discount;
    // Return the discount amount
    return discountAmount;
}
