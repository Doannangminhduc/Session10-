#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 1, 3, 6};
    int size = 5;
    int x, found = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d duoc tim thay tai vi tri: %d\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

