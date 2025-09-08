//Write a program to calculate an electricity bill based on units consumed.

#include<stdio.h>
int main (){

    float units;

    printf("enter units consumed in this month: ");    //input units
    scanf("%f",&units);

    if(units>=0){                                   //condition so programm does not break if the user input's negative value
        if(units>=0 && units<=100){
        printf("bill: %.2f rupee\n",units*4.50);
        }
        else if (units>=101 && units<=200){
        printf("bill: %.2f rupee\n",units*6.00);
        }
        else if(units>=201 && units<=300){
        printf("bill: %.2f rupee\n",units*8.00);
        }
        else if(units>=301 && units<=400){
        printf("bill: %.2f rupee\n",units*9.00);
        }
        else if(units>=401 && units<=500){
        printf("bill: %.2f rupee\n",units*11.00);
        }
        else{
        printf("bill: %.2f rupee\n",units*15.00);
        }
    }
    else{
        printf("enter valid units");      //this will be executed if the user will input negative values
    }

    return 0;
}                                   //end 