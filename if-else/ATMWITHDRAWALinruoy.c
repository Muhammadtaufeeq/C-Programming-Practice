#include <stdio.h>
int main()
{
    float balance = 10000.0; // Initial balance
    int withdrawal;

    printf("Welcome to the ATM Withdrawal System!\n");

    int Pin = 9889 , pin;
    printf("Enter Your pin XXXX: \n");
    scanf("%d" , &pin);

    if(Pin == pin){
    printf("Your current balance is:%.2f\n", balance);

    printf("Enter the amount to withdraw in multiples of 100 :");
    scanf("%d", &withdrawal);


    if (withdrawal <= 0)
    {
        printf("Invalid withdrawal amount. Please enter a positive amount.\n");
    }
    else if (withdrawal > balance)
    {
        printf("Insufficient balance for this withdrawal.\n");
    }
    else if (withdrawal % 100 != 0)
    {
        printf("Withdrawal amount must be in multiples of 100.\n");
    }
    else if(withdrawal < balance)
    {
        balance = balance - withdrawal;
        printf("Withdrawal successful! Your new balance is:%.2f\n", balance);
    }
 }
    else{
        printf("\nError! , Try Again");
    }

    return 0;
}