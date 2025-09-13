//Write a program to calculate library fine based on late days as follows:
/*First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/

#include<stdio.h>
int main(){
    int c,late;
    printf("enter the day");
    scanf("%d",&c);

    if(c>=1 && c<=5){
        late=2*c;
        printf("Fine is: %d",late);
    }
    else if( c>=6 && c<=10){
        late = 2*5+(c-5)*4;
        printf("YOUR FINE IS : %d",late);

    }
    else if(c>=11 && c<=30){
        late = 2*5+5*4+(c-10)*6;
        printf("YOUR FINE IS : %d",late);
    }
    else{
        printf("MEMBERSHIP CANCELLED");
    }

    return 0;

}

    
    
