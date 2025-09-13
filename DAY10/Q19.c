//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter the side 1");
    scanf("%d",&a);

    printf("Enter the side 2");
    scanf("%d",&b);

    printf("Enter the side 3");
    scanf("%d",&c);

    if(a==b && a==c || b==a && b==c || c==a && c==b){
        printf("Triangle is equilateral");
    }
    else if(a==b && a!=c || b==c && b!=a || c==a && c!=b){
        printf("Triangle is isoceles");
    }
    else{
        printf("Triangle is scalene");
    }

    return 0;
}