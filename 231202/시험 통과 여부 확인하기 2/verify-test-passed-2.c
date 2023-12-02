#include <stdio.h>

int main() {
    int n, arr[4], sum = 0, avg, cnt = 0;
    scanf("%d", &n);
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < 4;j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        avg = sum / 4;
        if(avg >= 60) {
            printf("pass\n");
            cnt++;
        }
        else {
            printf("fail\n");
        }
        sum = 0;
    }
    printf("%d", cnt);
    return 0;
}