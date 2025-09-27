//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(){

    int x,i,n,sum,count;
    printf("Enter the number of whose odd number sum u want");
    scanf("%d",&x);

    for(i=1 ; i<=n ; i++, i+=2){
        sum=sum+count;

    }

    printf("The sum of %d odd numbers = %d\n",x,sum);
    return 0;


}