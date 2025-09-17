//Write a program to check if a number is a perfect number.

#include<stdio.h>
int main(){

    int n;

    printf("enter a number to check if its a perfect number: ");      //input
    scanf("%d",&n);

    int sum = 0;
    int ori = n;

    for(int i = 1 ; i<=n/2 ; i++){      //loop
        if(n%i==0){                     //condition
            sum = sum + i;
        }
    }
    
    if(ori == sum){                                         //condition
        printf("the number is a perfect number");
    }
    else{
        printf("the number is not a perfect number");
    }

    return 0;
}                                                          //end