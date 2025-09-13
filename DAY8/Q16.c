//Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter the number1");
    scanf("%d",&a);

    printf("Enter the number2");
    scanf("%d",&b);

    printf("Enter the number3");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is largest", a);
    }
    else if(c>b && c>a){
        printf("%d is largest", c);
    }
    else if(b>a && b>c){
        printf("%d is largest", b);
    }
    else{
        printf("All are equal");

    }

    return 0;
}