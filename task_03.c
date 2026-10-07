#include <stdio.h>

int main() {

    int stock[10] = {60, 50, 20, 54, 30, 40, 10, 20, 80, 90};
    int minimum[10] = {40, 60, 40, 50, 44, 50, 20, 20, 60, 100};

    int largest = 0;
    int largestProduct = -1;
    int total = 0;

    for(int i = 0; i < 10; i++) {

        if(stock[i] < minimum[i]) {

            int reorder = minimum[i] - stock[i];

            printf("Stock %d needs Reordering\n", i);
            printf("Quantity needed: %d\n", reorder);

            total += reorder;

            if(reorder > largest) {
                largest = reorder;
                largestProduct = i;
            }
        }
    }

    printf("\nLargest reorder: %d units\n", largest);
    printf("Product needing largest reorder: Stock %d\n", largestProduct);
    printf("Total quantity needed: %d\n", total);

    return 0;
}