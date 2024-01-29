//Objective: Create a program to perform a linear search on an array of integers.
/*
cmake -DCMAKE_BUILD_TYPE=Debug -S . -B build
      cmake --build build
*/
#include <stdio.h>
#include <stdlib.h>
int linearSearch(int arr[], int target){
    int length = sizeof(arr);
    for (int i = 0; i < length; i++){
        if (arr[i] == target) {
                return i;
            }
    }
    return -1;

}
int main(){
    int arr[] = {1, 4, 7, 9, 12};
    int target = 9;
    int index = linearSearch(arr, target);
    if(index != -1){
        printf("Element found at index: %d\n", index);
    } else{
        printf("Element not found\n");
    }
    return 0;
}