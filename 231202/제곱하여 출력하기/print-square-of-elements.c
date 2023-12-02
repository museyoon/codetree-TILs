#include <stdio.h>

int main() {
    int arr[100], arr2[100], n;
    scanf("%d", &n);
    for(int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0;i < n;i++) {
        arr2[i] = arr[i] * arr[i];
    }
    for(int i = 0;i < n;i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}