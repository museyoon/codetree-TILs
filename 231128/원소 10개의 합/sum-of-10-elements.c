#include <stdio.h>

int main() {
    int arr[10], b = 0, i;
    for(i = 0;i < 10;i++)
    {
        scanf("%d", &arr[i]);
        b += arr[i];
    }
    printf("%d", b);
    return 0;
}