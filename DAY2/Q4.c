//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int pi = 3.14;
int main(){

    float r;
    printf("Enter the radius");
    scanf("%f", &r);

    float area=pi*r*r;
    float circumference=2*pi*r;

    printf("%f is area \n",area);
    printf("%f is circumference \n",circumference);

    return 0;
}