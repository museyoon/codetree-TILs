#include <stdio.h>

int main() {
    int arr[10], sum = 0, cnt = 0;
    for(int i = 0;i < 10;i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0;i < 10;i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("%d ", sum);
    sum = 0;
    for(int i = 0;i < 10;i++) {
        if(arr[i] % 3 == 0) {
            sum += arr[i];
            cnt++;
        }
    }
    double avg = (double)sum / cnt;
    printf("%.1lf", avg);
    return 0;
}