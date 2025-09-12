//Write a program to check if a number is a palindrome.

#include<stdio.h>
int main(){

    int n,reverse,remainder,original;

    printf("enter number n: ");     //input
    scanf("%d",&n);

    reverse = 0;
    original = n;

    while(n!=0){                            //loop
        remainder = n%10;
        reverse = (reverse*10) + remainder;
        n=n/10;
    }

    if(original == reverse){                     //condition
        printf("the number is a palindrome");
    }
    else{
        printf("the number is not a palindrome");
    }
    

    return 0;
}                    