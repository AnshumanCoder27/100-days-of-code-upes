//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){

    int t,h,m,s,ls;
    printf("Enter the time in seconds");
    scanf("%d",&t);

    h=t/3600;
    ls=t%3600;
    m=ls/60;
    s=ls%60;
    printf("%d:%d:%d is time",h,m,s);
    
    return 0;

}