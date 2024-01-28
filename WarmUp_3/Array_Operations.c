//Objective: Write a program to initialize an array of integers and find the sum and average of the elements.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int numbers[] = {1, 2, 3, 4, 5}; //initialize array
    int sum = 0; //initialize sum variable
    double totalnum = sizeof(numbers) / sizeof(numbers[0]); //got from online on how to get the length of an array in c: https://www.geeksforgeeks.org/length-of-array-in-c/
    for(int i=0; i<totalnum; i++){//For loop to get sum from array numbers
        sum += numbers[i];
    }
    double avg = sum / totalnum; //get average of array
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    return 0; //same as return 0
}