//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, pos, value;

    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        
        for (int i = n - 1; i >= pos - 1; i--) {
            arr[i + 1] = arr[i];
        }

        
        arr[pos - 1] = value;
        n++; 
        
        printf("Array after insertion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
