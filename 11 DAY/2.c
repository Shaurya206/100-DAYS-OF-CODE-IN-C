//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main (){

    float cost,sell;

    printf("enter the cost price of the product: ");    //input cost price
    scanf("%f",&cost);

    printf("enter the selling price of the product: ");  // input selling price
    scanf("%f",&sell);

    if(cost < sell){                           //condition
        float profit;
        profit = (sell - cost);
        printf("profit: %.1f%% \n",profit/cost*100);
    }
    else if(cost > sell){
        float loss;
        loss = (cost - sell);
        printf("loss: %.1f%% \n",loss/cost*100);
    }
    else{
        printf("no profit no loss");
    }

    return 0;
}                                     //end