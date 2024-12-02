#include <stdio.h>

int main() {
    int arr[] = {64, 4, 5, 12, 22, 1, 90};
    int i = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < i; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("Mang sau khi sap xep theo thu tu tang dan: \n");
    for (int i = 0; i < i; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

