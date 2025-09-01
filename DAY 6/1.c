//Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main (){

    int n;

    printf("enter number n: ");                //input
    scanf("%d",&n);

    if(n>=0){                                 //condition
        printf("the number is positive\n");
    }
    else{
        printf("the number is negative\n");
    }

    return 0;

}                                            // end