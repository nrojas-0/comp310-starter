/*
Objective: Implement a program to calculate the factorial of a number using recursion.
Please note that I do not recommend recursion for this particular task but want to make sure you know how to do it at a basic level.
(The escape is also guarded properly now as well.)
*/

#include <stdio.h>
#include <stdlib.h>
int Factorial(int number){
    if(number == 0){
        return 1;
    }
    return number * Factorial(number-1);
}
int main(){
    int number = 5;
    printf("Factorial of %d is: %d\n", number, Factorial(number));
    return 0;
}