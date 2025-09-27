//write a program to swap two numbers using a third variable.

#include<stdio.h>
int main(){

    int a,b,temp;
    printf("Enter the first number");
    scanf("%d",&a);

    printf("Enter the second number");
    scanf("%d",&b);

    printf("before swapping a= %d, b= %d \n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("after swapping a= %d, b= %d \n",a,b);

    return 0;
}

