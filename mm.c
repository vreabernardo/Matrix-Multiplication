#include <stdio.h>

#define N 5

int main() {
    float A[N][N];
    float B[N][N];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            A[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            B[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }

    printf("Matrix A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.1f ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.1f ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
