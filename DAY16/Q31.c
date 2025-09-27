//Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>
int main(){

    int i,number;
    printf("Enter the number");
    scanf("%d",&number);

    printf("Binary representation");
    for(i= sizeof(number) * 8-1; i>=0; i--){
        int bit= (number>>i) & 1;
        printf("%d",bit);
    }
    printf("\n");

    return 0;


    
    
}
