#include<stdio.h>

int main(){

    int signals[12] = {15, 1, 5, 7, 14, 5, 6, 17, 8, 9, 10, 2};
    int sum = 0,count = 0;
    float avg;
    int highest = signals[0];
    int lowest  = signals[0];

    for(int i = 0; i < 12; i++){
        
        sum += signals[i];

    }
    avg = sum / 12.0;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    for(int i = 0; i < 12; i++){
        if(signals[i] > avg){
            count++;
            printf("Signal %d is Over Loaded %d\n",(i+1),signals[i]);
        }
    }
    for(int i = 1; i < 12; i++) {
        if (signals[i] > highest) {
        highest = signals[i];
        }
        if (signals[i] < lowest) {
        lowest = signals[i];
        }
    }

    
    printf("Number of Over Loaded Signals: %d\n", count);
    printf("Highest Signal: %d\n", highest);
    printf("Lowest Signal: %d\n", lowest); 
    printf("Difference btw Highest & Lowest is: %d\n",(highest-lowest));
    return 0;
}