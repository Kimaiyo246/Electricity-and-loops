// A program to calculate customer's bill

#include <stdio.h>
int main() {
//Declaring the variables
    int customerID;
    char customerName[24];
    int unitsConsumed;
    float chargePerUnit, totalBill, surcharge ;

    //Entering the customer's variables
    printf("Enter Customer ID: ");
    scanf("%d" ,&customerID);
    printf("Enter Customer Name: ");
    scanf("%s" ,&customerName);
    printf("Enter Units Consumed: ");
    scanf("%d" ,&unitsConsumed);

    // if else statement to calculate bcharge per unit
    if (unitsConsumed <= 199) 
        chargePerUnit = 1.20;
        
     else if (unitsConsumed >= 200 && unitsConsumed < 400) 
        chargePerUnit = 1.50;
        
     else if (unitsConsumed >= 400 && unitsConsumed < 600) 
        chargePerUnit = 1.80;
        
     else if (unitsConsumed >=600)
        chargePerUnit = 2.00;
    

    // Calculating the total bill 
    totalBill = unitsConsumed * chargePerUnit;

    // Add surcharge if bill exceeds 400
    if (totalBill > 400) 
        surcharge = totalBill * 0.15;
    

    totalBill += surcharge;

    //least amount of bill to be payed
    if (totalBill < 100) 
        totalBill = 100;
    

    // Display the following output
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charge per Unit: %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: %.2f\n", totalBill);

    return 0;
    }