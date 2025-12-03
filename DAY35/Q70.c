//Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k;
    
    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    
    k = k % n;

    
    int temp[100];

    
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("Array after rotating to the right by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
