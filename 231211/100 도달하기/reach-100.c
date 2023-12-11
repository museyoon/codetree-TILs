#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100] = {1, n};
    int cnt = 1;
    while(1) {
        cnt++;
        arr[cnt] = arr[cnt - 1] + arr[cnt - 2];
        if(arr[cnt] > 100) {
            break;
        }
    }
    for(int i = 0; i <= cnt; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}