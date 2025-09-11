//Write a program to reverse a given number.

#include<stdio.h>
int main(){

    int n,reverse,remainder;

    printf("enter number n: ");     //input
    scanf("%d",&n);

    reverse = 0;

    while(n!=0){                            //loop
        remainder = n%10;
        reverse = (reverse*10) + remainder;
        n=n/10;
    }
    printf("%d",reverse);

    return 0;
}                            //end