//Objective: Write a program to create a file, write some data into it, and then read the data from the file.
#include <stdio.h>
#include <stdlib.h>
int main(){
    char filename[] = "example.txt";
    //Used https://www.geeksforgeeks.org/basics-file-handling-c/ as reference because I didn't know the commands for fileoperations in c
    //Write in file
    FILE *fw = fopen(filename, "w"); //Open for writing in text mode
    fprintf(fw, "Hello, World!");
    fclose(fw);
    //Read from file
    return 0;
}