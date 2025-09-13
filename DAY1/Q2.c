//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main(){

    float a,b;
    printf("Enter the first number");
    scanf("%f", &a);

    printf("Enter the second number");
    scanf("%f", &b);

    float sum=a+b;
    float difference=a-b;
    float product=a*b;
    printf("%.2f is sum \n %.2f is difference \n %.2f is product \n", sum, difference, product);
    if(b!=0){
        float quo=a/b;
        printf("%.2f is quotient", quo);
    }
    else{
        printf("NOT DEFINED");
    }

 return 0;
}