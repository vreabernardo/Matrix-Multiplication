#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

float A[N][N];
float B[N][N];
float S[N][N];


int main() {
   
    int i, j;
    srand(time(NULL));
       
    //populate A matrix
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            // Generate a random float between 0.0 and 1.0
            A[i][j] = (float)rand() / (float)RAND_MAX;
        }
    
    }
    
    // populate B matrix
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            // Generate a random float between 0.0 and 1.0
            B[i][j] = (float)rand() / (float)RAND_MAX;
        }
    }
 

        // Print the matrix
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.2f\t", A[i][j]); // Print with two decimal precision
        }
        printf("\n");
    }
    
    printf("\n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.2f\t", B[i][j]); // Print with two decimal precision
        }
        printf("\n");
    } 
    printf("\n");


    return 0;
}
