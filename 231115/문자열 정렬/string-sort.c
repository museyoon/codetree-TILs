#include <stdio.h>
#include <string.h>

void sort(char a[], int len);
void swap(char *x, char *y);

int main() {
    char arr[100];
    scanf("%s", arr);

    int n = strlen(arr);

    sort(arr, n);

    printf("%s", arr);

    return 0;
}

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void sort(char a[], int len) {
    int i, j;
    for(i = 0; i < len - 1; i++) {
        for(j = i + 1; j < len; j++) {
            if(a[i] > a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}