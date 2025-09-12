//Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>
int main (){

    int n,remainder;

    printf("enter the number: ");
    scanf("%d",&n);

    int quotient;

    while(n!=0){
        remainder = n%2;
        printf("%d",remainder);
        quotient = n/2;
        n = quotient;
    }

    return 0;
}