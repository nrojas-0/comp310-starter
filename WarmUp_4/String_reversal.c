//Objective: Create a function to reverse a character array (string) without using library functions.
#include <stdio.h>
int main() {
    char str[] = "Hello"; //you must use the char type and create an array of characters to make a string in C - LINK:https://www.w3schools.com/c/c_strings.php
    int str_size = sizeof(str)-1;
    for(int i=0, j=str_size-1; i<j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        //printf("word: %s\n",str); I used this to show if the loop was working because at first it wasn't because i didn't do size-1 for the array length
    }
    printf("%s\n", str);
    return 0;
}
/*
        for (int i = 0, j = strArray.length - 1; i < j; i++, j--) {
            char temp = strArray[i];
            strArray[i] = strArray[j];
            strArray[j] = temp;
        }
*/