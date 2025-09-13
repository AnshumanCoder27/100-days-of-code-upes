//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){

    int l,b;
    printf("Enter the lenght");
    scanf("%d", &l);

    printf("Enter the breadth");
    scanf("%d", &b);

    int area=l*b;
    int perimeter=2*(l+b);

    printf("%d is area \n",area);
    printf("%d is perimeter \n",perimeter);

    return 0;
}