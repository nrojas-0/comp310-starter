//Objective: Write a program to perform matrix addition and matrix multiplication on 2D arrays.
//Used Chatgpt to understand how to format the matricies and the arguments needed for the print,add, and mult with it starting with void
#include <stdio.h>
void printMatrix(int rows, int column, int matrix[rows][column]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int column, int a[rows][column], int b[rows][column], int sum[rows][column]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int rowsA, int columnA, int rowsB, int columnB, int a[rowsA][columnA], int b[rowsB][columnB], int product[rowsA][columnB]) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnB; j++) {
            product[i][j] = 0;
            for (int k = 0; k < columnA; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main(){
    int matrix1 [2][2] = {{1, 2}, {3, 4}};
    int matrix2 [2][2] = {{5, 6}, {7, 8}};

    int sum [2][2];
    int product [2][2];

    addMatrices(2, 2, matrix1, matrix2, sum);
    multiplyMatrices(2, 2, 2, 2, matrix1, matrix2, product);

    printf("Matrix Addition:\n");
    printMatrix(2, 2, sum);
    printf("Matrix Multiplication:\n");
    printMatrix(2, 2, product);
    return 0;
}