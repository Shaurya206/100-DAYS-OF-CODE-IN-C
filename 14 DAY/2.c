//Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main (){

    int n;

    printf("enter the number n: ");   //input
    scanf("%d",&n);

    int product = 1;

    for(int i = 2 ; i<=n ; i = i + 2){     //loop
        product *= i;                      // product *= i means (product = product*i)
    }

    printf("the product is: %d\n",product);

    return 0;
}                            //end