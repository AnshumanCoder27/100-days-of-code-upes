//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){

    float c;
    printf("Enter the celcius");
    scanf("%f", &c);

    float fahrenheit=((9*c)/5)+32;

    printf("%.2f is fahrenheit", fahrenheit);

    return 0;

}