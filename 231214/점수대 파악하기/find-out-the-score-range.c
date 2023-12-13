#include <stdio.h>

int main() {
    int arr[100];
    int arr2[11] = {0, };
    for(int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
        if(arr[i] < 10) {
            continue;
        }
        arr2[arr[i] / 10]++;
    }
    for(int i = 10; i >= 1; i--) {
        printf("%d0 - %d\n", i, arr2[i]);
    }
    return 0;
}