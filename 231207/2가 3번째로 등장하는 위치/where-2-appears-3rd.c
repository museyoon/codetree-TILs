#include <stdio.h>

int main() {
    int n, arr[100], count1 = 0, count2 = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)  {
        scanf("%d", &arr[i]);
        if(arr[i] == 2) {
            count1++;
        }
        count2++;
        if(count1 == 3) {
            break;
        }
    }
    printf("%d", count2);
    return 0;
}