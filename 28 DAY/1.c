//Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>
int main(){

    int n;

    printf("enter a number n: ");    //input
    scanf("%d",&n);

    int i,j;
    int prime;

    for(i=2 ; i<=n ; i++){            //loop for checking every number till n 
        prime = 1;
        for(j=2 ; j*j<= i ; j++){      //loop for checking every n 
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if(prime){
            printf("%d ",i);     //output
        }
    }

    return 0;
}                            //end