//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter the cost price :");
    scanf("%d",&cp);

    printf("Enter the selling price :");
    scanf("%d",&sp);

    if((sp-cp)>0){
        printf("PROFIT\n");
        float profitpercent=((sp-cp)*100)/cp;
        printf("%.2f  is the profitpercent", profitpercent);
    }
    else if((sp-cp)<0){
        printf("LOSS\n");
        float losspercent=((cp-sp)*100)/cp;
        printf("%.2f  is the losspercent", losspercent);
    
    }
    else{
        printf("Neither profit nor loss");
    }

    return 0;
}