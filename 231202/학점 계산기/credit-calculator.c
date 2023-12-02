#include <stdio.h>

int main() {
    int n;
    double arr[10], sum = 0, avg;
    scanf("%d", &n);
    for(int i = 0;i < n;i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("%.1lf\n", avg);
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