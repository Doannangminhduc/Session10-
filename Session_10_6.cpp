#include <stdio.h>

int main() {
    int arr[] = {12, 34, 23, 12, 56, 12, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    printf("Cac vi tri cua %d trong mang la: ", x);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay phan tu.");
    }

    return 0;
}

