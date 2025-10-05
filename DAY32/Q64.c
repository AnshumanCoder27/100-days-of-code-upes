//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int num, temp, digit;
    int count[10] = {0};  

    printf("Enter an integer number: ");
    scanf("%d", &num);


    if (num < 0)
        num = -num;

    
    if (num == 0) {
        count[0] = 1;
    } else {
        
        temp = num;
        while (temp > 0) {
            digit = temp % 10;
            count[digit]++;
            temp /= 10;
        }
    }

    
    int maxCount = count[0];
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    
    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digit %d: %d times\n", i, count[i]);
    }

    printf("Digit %d occurs the most (%d times).\n", maxDigit, maxCount);

    return 0;
}
