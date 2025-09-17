//Write a program to check if a number is a strong number.

#include<stdio.h>

int factorial(int n){                              //created a function to claculate factorial
    int fact = 1;  
    for(int i = n ; i>=1 ; i--){
        fact = fact*i;
    }
    return fact;
}

int main(){

    int n , remainder, sum = 0;


    printf("enter a number: ");              //inout
    scanf("%d",&n);   

    int ori = n;

    while(n!=0){                                      //loop
        remainder = n%10;
        sum = sum + factorial(remainder);
        n=n/10;
    }
    
    if(ori==sum){                                     //condition
        printf("the number is a strong number");
    }
    else{
        printf("the number is not a strong number");
    }

    return 0;
}                       //end

