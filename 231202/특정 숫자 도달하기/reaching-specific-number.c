#include <stdio.h>

int main() {
    int arr[10];
    int b = 0, c = 0;
    for(int i = 0;i < 10;i++) {
        scanf("%d", &arr[i]);
        if(arr[i] >= 250) {
            break;
        }
        else {
            b += arr[i];
            c++;
        }
    }
    printf("%d %.1f", b, (float)b / c);
    return 0;
}