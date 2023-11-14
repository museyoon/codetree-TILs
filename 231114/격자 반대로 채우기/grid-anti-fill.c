#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[10][10];
    int num = 1;
    int i, j;

    for (i = n - 1; i >= 0; i--){
        if (i % 2 == 0){
            for (j = n-1; j >= 0; j--)
                arr[j][i] = num++;
        }
        else{
            for (j = 0; j < n; j++)
                arr[j][i] = num++;
        }
    } 

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}