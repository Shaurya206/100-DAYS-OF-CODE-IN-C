//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(){

    int n;

    printf("enter the number n: ");  //input
    scanf("%d",&n);

    int sum = 0;

    for(int i = 1 ; i<=n ; i++){    //loop
        sum += i;                  //sum += i  means sum = sum + i
    }
    printf("the sum is: %d",sum);
 
    return 0;   //end
}