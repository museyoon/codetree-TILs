#include <stdio.h>

int main() {
    int n, arr[100], arr1[100], cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            arr1[cnt] = arr[i];
            cnt++;
        }
    }
    for(int i = 0; i < cnt; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}