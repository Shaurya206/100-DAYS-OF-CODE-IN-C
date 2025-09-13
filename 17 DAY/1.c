//Write a program to check if a number is an Armstrong number.

#include<stdio.h>
int main (){

    int n,cube = 0,remainder;

     printf("enter a number: ");        //input
     scanf("%d",&n);

     int num = n;

     while(n > 0){                     //loop
     remainder = n%10;
     cube += (remainder*remainder*remainder);
     n = n/10;
    }

    if(num == cube){                              //condition
        printf("the number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }
    
    return 0;
}                                   //end