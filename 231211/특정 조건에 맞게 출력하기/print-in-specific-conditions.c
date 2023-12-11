#include <stdio.h>

int main() {
    int arr[100], count = 0;
    for(int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
        count++;
    }
    for(int j = 0; j < count; j++) {
        if(arr[j] % 2 == 0) {
            arr[j] /= 2;
        }
        else {
            arr[j] += 3;
        }
    }
    for(int k = 0; k < count; k++) {
        printf("%d ", arr[k]);
    }
    return 0;
}