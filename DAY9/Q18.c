//Write a program to assign grades based on a percentage input.

#include <stdio.h>
int main(){

    int c;
    printf("enter the marks in percentage");
    scanf("%d",&c);

    if(c>=85 && c<=100){
        printf("GRADE O");
    }
    else if(c>=75 && c<=84){
        printf("GRADE A+");
    }
    else if(c>=65 && c<=74){
        printf("GRADE A");
    }
    else if(c>=55 && c<=64){
        printf("GRADE B+");
    }
    else if(c>=45 && c<=54){
        printf("GRADE B");
    }
    else if(c>=40 && c<=44){
        printf("GRADE C+");
    }
    else if(c>=35 && c<=39){
        printf("GRADE C");
    }
    else{
        printf("GRADE F");
    }

    return 0;
    
}