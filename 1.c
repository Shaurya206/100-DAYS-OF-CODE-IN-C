//Write a program to input two numbers and display their sum.

#include<stdio.h>
int main(){

    int a,b,sum;                                             //integer

    printf("enter first number: ");                          // input first number
    scanf("%d",&a);

    printf("enter second number: ");                         // input second number
    scanf("%d",&b); 

    sum = a + b ;                                            // added value is stored in 'sum'
  
    printf("the sum of two numbers is: %d\n",sum);

    return 0;

}                                                           // end