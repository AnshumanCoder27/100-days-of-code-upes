//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main(){

    float p,r,t;
    printf("Enter the principal");
    scanf("%f",&p);

    printf("Enter the rate");
    scanf("%f",&r);

    printf("Enter the time");
    scanf("%f",&t);

    float simple= (p*r*t)/100;

    printf("%f is the simple interest\n",simple);

    float a;
    printf("Enter the final amount");
    scanf("%f",&a);

    float increase=pow((1+r/100),t);
    a=p*increase;
    float compound=a-p;

    printf("%f is the compound interest",compound);

    return 0;

}