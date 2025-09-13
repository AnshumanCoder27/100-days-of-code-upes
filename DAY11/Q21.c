//Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main(){
    int month;
    printf("Enter the number of months whose number of days u want to be displayed");
    scanf("%d",&month);

    switch(month){
        case 1:
        printf("January\n");
        printf("31 Days");
        break;

        case 2:
        printf("February\n");
        printf("28 or 29 days");
        break;

        case 3:
        printf("March\n");
        printf("31 Days");
        break;

        case 4:
        printf("April\n");
        printf("30 Days");
        break;

        case 5:
        printf("May\n");
        printf("31 Days");
        break;

        case 6:
        printf("June\n");
        printf("30 Days");
        break;

        case 7:
        printf("July\n");
        printf("31 Days");
        break;

        case 8:
        printf("August\n");
        printf("31 Days");
        break;

        case 9:
        printf("September\n");
        printf("30 Days");
        break;

        case 10:
        printf("October\n");
        printf("31 Days");
        break;

        case 11:
        printf("November\n");
        printf("30 Days");
        break;

        case 12:
        printf("December\n");
        printf("31 Days");
        break;

        default:
        printf("Number should be between 1-12");
    }

    return 0;
}
