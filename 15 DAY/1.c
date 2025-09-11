//Write a program to calculate the factorial of a number

#include<stdio.h>
int main (){

    int n;

    printf("enter the number n: ");  //input of number n
    scanf("%d",&n);

    int fact = 1;                    

    for(int i = 1 ; i<=n ; i++){     //condition 
        fact*=i;                     // fact*=i means fact = fact*i
    }
    printf("the factorial of the number %d is %d",n,fact);

    return 0;
    
}                   //end 