//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main(){

    char a;
    printf("Enter the character");
    scanf("%s",&a);

    if(a=='a'|| 'e'|| 'i'|| 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U'){
        printf("It is a vowel");
    } else{
        printf("It is a consonant");
    }

    return 0;
}