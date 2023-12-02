#include <stdio.h>

int main() {
    int n;
    float arr[10], sum = 0, avg;
    scanf("%d", &n);
    for(int i = 0;i < n;i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("%.1f\n", avg);
    if(avg >= 4.0) {
        printf("Perfect");
    }
    else if(avg >= 3.0) {
        printf("Good");
    }
    else {
        printf("Poor");
    }
    return 0;
}