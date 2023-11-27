#include <stdio.h>
#include <stdlib.h>

int main() {
    // have to declare with a pre-determined number of elements
    int numbers[10];

    // To initialise an array with values

    int otherNumbers[5] = {0, 1, 2, 3, 4};
    int someNumbers[] = {0, 1, 2, 3, 4};

    printf("Original array:\n"); 
    for (int i = 0; i < 5; i++) {
        printf("Index %d is %d\n", i, otherNumbers[i]);
    }

    // Accessing elements 
    otherNumbers[2] = 3;

    printf("Changing position 2 to %d\n", otherNumbers[2]);
    printf("New array:\n"); 
    for (int i = 0; i < 5; i++) {
        printf("Index %d is %d\n", i, otherNumbers[i]);
    }



    // Creating a new 2d array
    int new_array[3][3];
    int new_array2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; 


    // NOTE - Stdlib.h has implementation for malloc and free

    // Dynamic memory allocation
    int* dynamicArray = (int*)malloc(5 * sizeof(int)); // Dynamic allocation
    /*
    malloc = memory allocate
    make an array of 5 ints
    */
    // Use the allocated memory
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i + 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("Dynamic memory index %d is %d\n", i, dynamicArray[i]);
    }
    // Free the allocated memory when done
    free(dynamicArray);



    int numRows = 3;
    int numCols = 4;
    // Allocating memory for a 2d array
    int** dynamic2DArray = (int**)malloc(numRows * sizeof(int*));
    

    // Allocate memory for each row
    for (int i = 0; i < numRows; i++) {
        dynamic2DArray[i] = (int*)malloc(numCols * sizeof(int));
        if (dynamic2DArray[i] == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            exit(EXIT_FAILURE);
        }
    }


    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("Element at dynamic2DArray[%i][%i]: ", i, j);
            printf("%d\n", dynamic2DArray[i][j]);
        }

    }


    return 0;
}
