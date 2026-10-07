#include <stdio.h>

int main() {

    int amount;
    int count = 0;
    long total = 0;

    printf("Welcome to the ATM\n");

    while (1) {
        printf("Enter withdrawal amount (0 to exit): ");
        scanf("%d", &amount);

        if (amount == 0) {
            break;
        }

        if (amount < 0) {
            printf("Invalid amount. Try again.\n");
            continue;
        }

        printf("Processing withdrawal of %d...\n", amount);
        count++;
        total += amount;
    }

    printf("\n--- Session Summary ---\n");
    printf("Total transactions: %d\n", count);
    printf("Total amount withdrawn: %ld\n", total);

    return 0;
}