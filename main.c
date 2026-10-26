#include <stdio.h>

int main(void)
{
    double revenue;
    double expenses;
    double balance;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("===========================\n\n");

    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\n--- Budget Report ---\n");
    printf("Revenue : N$%.2f\n", revenue);
    printf("Expenses: N$%.2f\n", expenses);
    printf("Balance : N$%.2f\n", balance);

    if (balance > 0) {
        printf("Status  : SURPLUS\n");
    } 
    else if (balance < 0) {
        printf("Status  : DEFICIT\n");
    } 
    else {
        printf("Status  : BALANCED\n");
    }

    return 0;
}