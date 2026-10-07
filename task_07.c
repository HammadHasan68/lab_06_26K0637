#include <stdio.h>

int main() {

    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    printf("Input: %d -> Reversed: %d -> ", original, reversed);

    if (reversed == original) {
        printf("Palindrome Confirmed\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}