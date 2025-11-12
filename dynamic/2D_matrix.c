#include <stdio.h>
#include <stdlib.h>

void** matrix_2d (size_t x, size_t y);

int main () {
    int row = 0;
    int col = 0;

    printf("Enter rows size for matrix: ");
    scanf("%d", &row);

    printf("Enter cols size for matrix: "); 
    scanf("%d", &col);

    int** matrix = (int**)matrix_2d(row, col);

    for (int i = 0; i < row; ++i) {
        free(matrix[i]);
    }

    int val = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            matrix[i][j] = ++val;
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    free(matrix);

    return 0;
}

void** matrix_2d (size_t x, size_t y) {
    void** matrix = malloc (x * sizeof(int*));
    if (!matrix) {
        perror ("malloc faild1");
        return NULL;
    }

    for (int i = 0; i < x; ++i) {
        matrix[i] = malloc(y * sizeof(int));
        if (!matrix[i]) {
            perror ("malloc faild2");
            for (int j = 0; j < i; ++j) {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}
