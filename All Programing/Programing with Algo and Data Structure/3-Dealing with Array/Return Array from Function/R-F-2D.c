#include <stdio.h>

#define ROWS 3
#define COLS 3

/* Function declaration */
void matrixAddition(int mat1[][COLS], int mat2[][COLS], int res[][COLS]);
void printMatrix(int mat[][COLS]);

int main()
{
    int mat1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[ROWS][COLS] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};    

    // Resultant matrix which is passed to function. 
    // Function performs calculation and fills the array
    int res[ROWS][COLS];

    // Input elements in matrix using function
    matrixAddition(mat1, mat2, res);

    // Print resultant array
    printMatrix(res);    

    return 0;
}

/**
 * Function to add two matrices and return the resultant matrix.
 * 
 * @mat1    First matrix to add.
 * @mat2    Second matrix to add.
 * @res     The resultant matrix that will be filled with addition 
 *          result.
 */
void matrixAddition(int mat1[][COLS], int mat2[][COLS], int res[][COLS])
{
    int i, j;
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

/** 
 * Function to accept a two dimensional array and print
 * its elements.
 * 
 * @mat     Two dimensional integer array to print.
 */
void printMatrix(int mat[][COLS])
{
    int i, j;

    // Print elements of two dimensional array.
    printf("Elements in matrix: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
