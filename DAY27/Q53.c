//Write a program to print the following pattern:

#include <stdio.h>

int main() {
    int i, j;
    int top_half = 5;

    
    for (i = 0; i < top_half; i++) {
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = top_half - 2; i >= 0; i--) {
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
