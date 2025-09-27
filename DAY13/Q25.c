//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main(){

    int a,b;
    char op;

    printf("Enter the first number");
    scanf("%d",&a);

    printf("Enter the operator");
    scanf("%c\n",&op);

    printf("Enter the second number");
    scanf("%d\n",&b);

    switch(op){
        case'+':
        printf("%d+%d=%d\n",a,b,a+b);
        break;

        case '-':
        printf("%d-%d=%d\n",a,b,a-b);
        break;

        case '*':
        printf("%d*%d=%d\n",a,b,a*b);
        break;

        case '/':
            if(b!=0){
            printf("%d/%d=%d\n",a,b,a/b);
            }
            else{
            printf("divison by 0 is not valid");
            }
        break;

        case '%':
        if(b!=0){
            printf("%d %% %d=%d\n",a,b,a%b);
        }
        else{
            printf("modulus with 0 is not valid");
        }
        break;

        default:
        printf("invalid operator\n");

    }

    return 0;



    

    
}