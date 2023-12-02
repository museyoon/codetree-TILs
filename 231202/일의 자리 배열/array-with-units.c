#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[10] = {n, m};
    for(int i = 2; i < 10;i++) {
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
    }
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}