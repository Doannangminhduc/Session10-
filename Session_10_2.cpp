#include <stdio.h>

int main() {
    int arr[] = {64, 4, 5, 12, 22, 1, 90};
    int b = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < b-1; i++) {
        for (int j = 0; j < b-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep theo thu tu tang dan: \n");
    for (int i = 0; i < b; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

