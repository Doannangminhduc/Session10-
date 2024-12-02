#include <stdio.h>

int main() {
    int arr[] = {64, 4, 5, 12, 22, 1, 90};
    int s = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < s-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < s; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("Mang sau khi sap xep theo thu tu tang dan: \n");
    for (int i = 0; i < s; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

