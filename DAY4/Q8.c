//Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){

    int sum=0, n;
    printf("Enter the number n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    printf("Sum of n numbers is %d",sum);

    return 0;
    
}