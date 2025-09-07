//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){
  
    int year;             //integer

    printf("enter year to check if its a leap year or not: ");   //input
    scanf("%d",&year);



    if(year>0){                                            //condition so user does not enter negative values
        if((year%4==0 && year%100!=0) || year%400 == 0){
        printf("leap year\n");
    }                                                      // if else nested
    else{
        printf("not a leap year");
    }
    }
    else{
        printf("enter valid value");
    }

    return 0;
     
}                                                         // end