//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, i;
    int posCount = 0, negCount = 0, zeroCount = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    
    printf("Positive numbers = %d\n", posCount);
    printf("Negative numbers = %d\n", negCount);
    printf("Zeroes           = %d\n", zeroCount);

    return 0;
}
