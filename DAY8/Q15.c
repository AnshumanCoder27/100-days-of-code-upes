//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main(){

    char c;
    printf("Enter the character");
    scanf("%c",&c);

    if(c>='a' && c<='z'){
        printf("It is a lowercase alphabet");

    } 
    else if(c>='A' && c<='Z'){
        printf("It is a uppercase alphabet");
    }
    else if(c==1 ||c== 2 ||c== 3 ||c== 4 || c==5 || c==6 || c==7 ||c== 8 || c==9){
        printf("It is a digit");
    }
    else{
        printf("It is a special character");
    }

    return 0;

}
    
