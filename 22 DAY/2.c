//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>
int main(){

    int n;

    printf("enter a number: ");
    scanf("%d",&n);                //input

    float numerator,denominator,fraction,sum = 1;

    for(int i = 1 ; i<=n ; i++){                   //loop
        numerator = (3.0*i)-(i-1);
        denominator = 2.0*(i+1);
        fraction = numerator/denominator;
        sum = sum + fraction;
    }

    printf("the sum is: %.2f",sum);        //output

    return 0;
}                         //end