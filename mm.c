#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

// Function prototypes
void initializeMatrix(float matrix[N][N]);
void printMatrix(float matrix[N][N], const char* name);
void multiplyMatrices(float A[N][N], float B[N][N], float C[N][N]);

int main() {
    float A[N][N], B[N][N], C[N][N];
    clock_t start, end;
    long double cpu_time_used;
   

    // Initialize matrices A and B
    initializeMatrix(A);
    initializeMatrix(B);

    // Print matrices A and B
    printMatrix(A, "A");
    printMatrix(B, "B");

    // Start timing
    start = clock();

    // Multiply matrices A and B, result in C
    multiplyMatrices(A, B, C);

    // Stop timing
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Print the result matrix C
    printMatrix(C, "C");
   
    return 0;
}

// Function to initialize matrix with sample values
void initializeMatrix(float matrix[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrix[i][j] = (float)rand() / (float)(RAND_MAX);
        }
    }
}

// Function to print matrices
void printMatrix(float matrix[N][N], const char* name) {
    int i, j;
    printf("Matrix %s:\n", name);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.1f ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(float A[N][N], float B[N][N], float C[N][N]) {
    int i, j, k;
    for(i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = 0;
            for (k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

