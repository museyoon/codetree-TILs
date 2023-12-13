#include <stdio.h>

int main() {
    int arr2[10] = {0, };
    int arr[99];
    for(int i = 0; i < 99; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
        if(arr[i] < 10) {
            continue;
        }
        arr2[arr[i] / 10]++;
    }
    for(int i = 1; i <= 9; i++) {
        printf("%d - %d\n", i, arr2[i]);
    }
    return 0;
}