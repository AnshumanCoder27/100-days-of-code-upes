//Write a program to find the LCM of two numbers.

#include <stdio.h>


int findGCD(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2, lcm;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    lcm = findLCM(num1, num2);

    
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
