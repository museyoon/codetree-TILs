#include <stdio.h>

int main() {
    char arr[10];
    for(int i = 0;i <=9;i++)
    {
        scanf("%c%*c", &arr[9-i]);
    }
    for(int i = 0;i <= 9;i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}