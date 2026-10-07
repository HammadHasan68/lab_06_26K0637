#include<stdio.h>


int main(){

    int marks[15] = {85, 100, 78, 92, 98, 76, 95, 89, 84, 91, 87, 99, 80, 82, 96};
    int count = 0,sum = 0;
    int highest = marks[0];
    int lowest = marks[0];
    

    for(int i = 0; i < 15; i++){

        marks[i] += 5;

        if((marks[i])>100){

            marks[i] = 100;
        }

        if(marks[i]==100){
            count++;
        }

        if(marks[i] > highest){
            highest = marks[i];
        }

        if(marks[i] < lowest){
            lowest = marks[i];
        }
        sum += marks[i];
    }

    printf("\nClass average is: %.2f",(sum/15.0));
    printf("\nStudents having exactly 100 Marks are: %d",count);
    printf("\nMarks Range is: %d", (highest-lowest));


    return 0;
}