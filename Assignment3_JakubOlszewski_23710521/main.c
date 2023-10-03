#include <stdio.h>

// Function calculates the sum of the array
int arraySum(const int sales[4]) {
    int sum = 0; // Initialize sum
    for (int i = 0; i < 4; ++i) { // Iterate through all elements
        sum += sales[i]; // Add each element to sum
    }
    return sum; // Return sum
}

// Function calculates the average of the array
int averageSales(int sales[4]) {
    return arraySum(sales) / 4; // Using arrySum function to calculate the average sales
}

// Function calculates the average spend per customer
int avgSpendPerCustomer(int sales[4]) {
    short int customers = 500; // Number of customers
    int avgSpend = arraySum(sales) / customers; // Using arraySum function to calculate the average spend per customer
    return avgSpend; // Return average spend per customer
}

// Function returns a message based on the average sales
// Using a function to return a message based on the avarage is more efficient
// than using if statements in the main function, because of the inversion of statements
char *salesValueMsg(int avgSales) {
    if (avgSales > 15000) // If average sales are higher than 15000 return "Sales are very high"
        return "Sales are high";
    if (avgSales >= 10000) // If average sales are higher than 10000 return "Sales are high"
        return "Sales are normal";
    return "Sales are low"; // If average sales are lower than 10000 return "Sales are low"
}

int main() {
    printf("Input values in Euro");
    int dailySales[4]; // Array to store the daily sales
    for (int i = 0; i < 4; ++i) {
        printf("\nInput sales from day %d: ", i+1);
        scanf_s("%d", &dailySales[i]); // Input sales from each day and saving them in array dailySales
    }
    int avgSales = averageSales(dailySales); // Calculate the average sales
    printf("Average daily sales from 4 days: %d Euro", avgSales);
    printf("\n%s", salesValueMsg(avgSales));
    printf("\nAverage spend per customer is: %d Euro", avgSpendPerCustomer(dailySales));
    return 0;
}
