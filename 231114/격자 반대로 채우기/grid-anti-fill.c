#include <stdio.h>

void fillMatrix(int n, int matrix[n][n]) {
    int value = 1;
    for(int j = n - 1; j >= 0; j--) {
        if(j % 2 == 0) {
            for(int i = n - 1; i >= 0; i--) {
                matrix[i][j] = value++;
            }
        } else {
            for(int i = 0; i < n; i++) {
                matrix[i][j] = value++;
            }
        }
    }
}

void printMatrix(int n, int matrix[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    fillMatrix(n, matrix);
    printMatrix(n, matrix);
    return 0;
}