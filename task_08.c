#include <stdio.h>

int main() {

    int seats[15] = {1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0};
    int booked = 0, empty = 0;
    int first = -1, last = -1;

    for (int i = 0; i < 15; i++) {
        if (seats[i] == 1) {
            booked++;
        } else {
            empty++;
            if (first == -1) {
                first = i + 1;
            }
            last = i + 1;
        }
    }

    printf("Total booked seats: %d\n", booked);
    printf("Total empty seats: %d\n", empty);

    if (first != -1) {
        printf("First available seat: %d\n", first);
        printf("Last available seat: %d\n", last);
    } else {
        printf("No seats available.\n");
    }

    int toBook = 3;
    for (int i = 0; i < 15 && toBook > 0; i++) {
        if (seats[i] == 0) {
            seats[i] = 1;
            toBook--;
        }
    }

    printf("\nFinal seating chart (0 = empty, 1 = booked):\n");
    for (int i = 0; i < 15; i++) {
        printf("Seat %2d: %d\n", i + 1, seats[i]);
    }

    return 0;
}