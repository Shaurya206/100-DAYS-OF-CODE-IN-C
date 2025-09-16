// Write a program to find the product of odd digits of a number.

#include<stdio.h>
int main (){

    int n,last,product = 1;

    printf("enter a number: ");        //input
    scanf("%d",&n);

    while(n!=0){           //loop
        last = n%10;
        if(last%2!=0){
            product = product * last;
        }
        n = n/10;
    }

    printf("the product of odd numbers is: %d\n",product);         //output

    return 0;
}                          //end