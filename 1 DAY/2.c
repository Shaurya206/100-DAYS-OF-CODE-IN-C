//Write a program to input two numbers and display their sum, difference, product, and quotient

#include<stdio.h>
int main (){

    int a,b;
    float sum,diff,pro,quo;

    printf("enter first number: ");                // input first number
    scanf("%d",&a);

    printf("enter second number: ");              // input second number
    scanf("%d",&b);

    sum = a + b ;              //sum
    diff = a - b ;             //difference
    pro = a * b ;              //product
    quo = a / b ;              //quotient

    printf("sum: %.2f\n difference: %.2f\n product: %.2f\n quotient: %.2f\n",sum,diff,pro,quo);   
    
    //%.2f is used so it only gives an output of 2 decimal palces 

    return 0;

}                                                // end          