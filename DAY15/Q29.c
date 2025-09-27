//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    int product=1;

    for(i=n; i>=1; i--){
         product=product*i;
    }
    printf("the factorial of %d is = %d\n",n, product);

    return 0;
}