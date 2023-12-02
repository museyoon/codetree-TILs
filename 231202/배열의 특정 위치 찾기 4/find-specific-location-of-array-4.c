#include <stdio.h>

int main() {
    int arr[10], cnt = 0, sum = 0;
    for(int i = 0;i < 10;i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
        else {
            if(arr[i] % 2 == 0) {
                cnt++;
                sum += arr[i];
            }
        }
    }
    printf("%d %d", cnt, sum);
    return 0;
}