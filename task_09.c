#include <stdio.h>

int main() {

    int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
    int flagged = 0, normalCount = 0;
    long normalSum = 0;
    int largest = transfers[0];
    int largestPos = 1;

    for (int i = 0; i < 10; i++) {

        if (transfers[i] < 100) {
            printf("Transfer %d (%d) -> Flagged: too small (test transaction)\n", i + 1, transfers[i]);
            flagged++;
        }
        else if (transfers[i] > 200000) {
            printf("Transfer %d (%d) -> Flagged: too large (suspicious)\n", i + 1, transfers[i]);
            flagged++;
        }
        else {
            normalSum += transfers[i];
            normalCount++;
        }

        // Track the largest transfer overall
        if (transfers[i] > largest) {
            largest = transfers[i];
            largestPos = i + 1;
        }
    }

    printf("\nTotal flagged transfers: %d\n", flagged);

    if (normalCount > 0) {
        printf("Average of normal transfers: %.2f\n", (float)normalSum / normalCount);
    } else {
        printf("No normal transfers.\n");
    }

    printf("Largest transfer: %d (Transfer %d)\n", largest, largestPos);

    return 0;
}