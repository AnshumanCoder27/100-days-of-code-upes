//Write a program to calculate electricity bill based on units consumed with these rates

#include<stdio.h>
int main(){
    int a,n;
    printf("ENTER THE NUMBER OF UNITS CONSUMED:");
    scanf("%d",&a);
    printf("YOUR BILL IS: %d", bill(a));
    


    int amount = 0;
    if (n <= 100) {
        amount = n * 5;
    } else if (n <= 200) {
        amount = (100 * 5) + (n - 100) * 5;
    } else {
        amount = (100 * 5) + (100 * 5) + (n - 200) * 10;
    }

    return 0;
    
}