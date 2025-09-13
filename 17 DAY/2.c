// Write a program to check if a number is prime.

#include<stdio.h>
int main (){

    int n;
    int count = 0;

    printf("enter a number to check if its a prime: ");    //input
    scanf("%d",&n);

    for(int i = 2 ; i<n ; i++){        //loop 
        if(n%i==0){
            count++;
        }
    }
    if(count!=0){                          //condition
        printf("the number is not prime");
    }    
    else {
        printf("the number is prime");
    }

       
    return 0;
}                              //end