//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, digits = 0;
    int firstDigit, lastDigit, power, middlePart;


    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    if (digits == 1) {
        printf("Only one digit. No swap needed. Result: %d\n", num);
        return 0;
    }

    
    lastDigit = num % 10;

    
    firstDigit = num / (int)pow(10, digits - 1);

    
    middlePart = (num % (int)pow(10, digits - 1)) / 10;

    
    int swappedNum = lastDigit * (int)pow(10, digits - 1) + 
                     middlePart * 10 + 
                     firstDigit;

    
    printf("Original number: %d\n", originalNum);
    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
