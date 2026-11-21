#include <stdio.h>

#define ROWS 64
#define COLS 64

void matrix_multiply(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]) {
    int i, j, k;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            C[i][j] = 0;
            for (k = 0; k < COLS; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void print_matrix(int M[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[ROWS][COLS] ;
    int B[ROWS][COLS] ;
    int C[ROWS][COLS] ;
	FILE *fp1;
	FILE *fp2;
	fp1=fopen("mat1.txt","rw+");
	fp2=fopen("mat22.txt","rw+");
	for (int i = 0 ; i < ROWS ; i++)
		for(int j = 0 ; j < COLS ; j++)
		{
			fscanf(fp1,"%d",&A[i][j]);
			fscanf(fp2,"%d",&B[i][j]);
		}
    matrix_multiply(A, B, C);

    printf("Matrix A:\n");
    print_matrix(A);
    printf("Matrix B:\n");
    print_matrix(B);
    printf("Matrix C (A * B):\n");
    print_matrix(C);

    return 0;
}
