#include <stdio.h>

int main()
{
    int notes500[5] = {10, 5, 8, 12, 6};
    int notes200[5] = {20, 15, 10, 8, 14};
    int notes100[5] = {30, 25, 40, 35, 20};
    int totalAmount = 0, withdraw;

    for (int i = 0; i < 5; i++)
    {
        totalAmount += (notes500[i] * 500);
        totalAmount += (notes200[i] * 200);
        totalAmount += (notes100[i] * 100);
    }

    printf("\nEnter the Withdrawal Amount: ");
    scanf("%d", &withdraw);

    if (withdraw > totalAmount)
    {
        printf("\nInsufficient Funds");
    }
    else if (withdraw % 100 != 0)
    {
        printf("\nInvalid Amount Entered");
    }
    else
    {
        printf("\nTransaction Approved");
    }

    printf("\nTotal Amount in Bank: %d",totalAmount);
    printf("\nWithdrawal Amount is: %d", withdraw);
    printf("\nAmount after Transaction: %d",(totalAmount-withdraw));
    return 0;
}