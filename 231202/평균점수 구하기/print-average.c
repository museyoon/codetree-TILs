#include <stdio.h>

int main() {
    double arr[8], sum = 0, avg;
    for(int i = 0;i < 8;i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    avg = sum / 8;
    printf("%.1lf", avg);
    return 0;
}