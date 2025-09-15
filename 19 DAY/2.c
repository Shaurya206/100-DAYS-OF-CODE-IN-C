//Write a program to find the sum of digits of a number.

#include<stdio.h>
int main(){

    int n,remainder;
    int sum = 0;

    printf("enter a number: ");               //input
    scanf("%d",&n);

    while(n!=0){                           //loop
        remainder = n%10;
        sum += remainder;         //here sum+= show(sum = sum + remainder)
        n = n/10;
    }

    printf("the sum of the digit of the number is: %d\n",sum);     //output

    return 0;
}                 //end