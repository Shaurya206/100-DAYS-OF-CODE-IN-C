//Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main (){

    int n;

    printf("enter the number n: ");          //input
    scanf("%d",&n);

    int sum = 0;
    
    for(int i = 1 ; i <= n ; i++){           //for loop
        sum = sum + i;                       // i++    will add 1 after using it
    }

    printf("the sum of first n numbers is: %d\n",sum);

    return 0;

}                                           // end