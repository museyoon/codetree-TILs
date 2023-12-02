#include <stdio.h>

int main() {
    int arr[100], n;
    scanf("%d", &n);
    for(int i = 0;i < n;i++) { 
        scanf("%d", &arr[i]);
    }
    for(int i = n - 1;i >= 0;i--) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}