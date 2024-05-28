#include <stdio.h>
#include <stdlib.h>

// Function prototypes
double calculateTheAmount(double Item, double unitPrice, double Discount);
double calculateDiscountRate(double Discount, double originalPrice);

int main() {
    double Item, unitPrice, Discount = 0.2;
    char Name[1000];

    printf("Enter the name of item bought: ");
    scanf("%999s", Name); // Limiting the size of the array to prevent buffer overflow
    printf("Enter the amount of item bought: ");
    scanf("%lf", &Item);
    printf("Enter the unit price of item bought: ");
    scanf("%lf", &unitPrice);

    double totalCostBeforeDiscount = Item * unitPrice; // Calculating total cost before discount
    double DiscountAmount = calculateTheAmount(Item, unitPrice, Discount); // Calculating discount amount
    double amountAfterDiscount = totalCostBeforeDiscount - DiscountAmount; // Calculating amount after discount

    printf("Name of items bought: %s\n", Name);
    printf("Items Bought: %.2lf\n", Item);
    printf("The Unit Price: %.2lf\n", unitPrice);
    printf("Discount Applied: %.2lf%%\n", Discount * 100);
    printf("Amount Paid After Discount: %.2lf\n", amountAfterDiscount);

    return 0;
}

// Function to calculate the discount amount
double calculateTheAmount(double Item, double unitPrice, double Discount) {
    double totalCostBeforeDiscount = unitPrice * Item;
    double discountAmount = totalCostBeforeDiscount * Discount;
    return discountAmount;
}

// Function to calculate the discount rate (not used in the corrected version)
double calculateDiscountRate(double Discount, double originalPrice) {
    return Discount / originalPrice;
}