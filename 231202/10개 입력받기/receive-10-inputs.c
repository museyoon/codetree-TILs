#include <stdio.h>

int main() {
    int arr[10], cnt = 0, sum = 0;
    for(int i = 0;i < 10;i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
        cnt++;
        sum += arr[i];
    }
    double avg = (double)sum / cnt;
    printf("%d %.1f", sum, avg);
    return 0;
}