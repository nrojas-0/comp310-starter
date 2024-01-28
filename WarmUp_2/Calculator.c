//Objective: Create a program that takes two numbers as input and performs addition, subtraction, multiplication, and division.

#include <stdio.h>

int main(){
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);//need to use a scanner in c to get user input
    printf("Enter second number: ");
    scanf("%lf", &num2);//need to use a scanner in c to get user input

    /*
    Need to get this into c program from java
    System.out.println("Sum: " + (num1 + num2));
        System.out.println("Difference: " + (num1 - num2));
        System.out.println("Product: " + (num1 * num2));
        System.out.println("Quotient: " + (num1 / num2));
    */
    printf("Sum: %lf", num1 + num2);
    printf("Difference: %lf", (num1 - num2));
    printf("Product: %lf", (num1 * num2));
    printf("Quotient: %lf", (num1 / num2));
}
