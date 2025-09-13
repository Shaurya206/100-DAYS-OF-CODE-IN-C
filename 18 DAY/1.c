//Write a program to print all factors of a given number.

#include<stdio.h>
int main(){

    int n;

    printf("enter a number: ");     //input
    scanf("%d",&n);

    printf("the factors of given number %d are: ",n);

    for(int i = 1 ; i<=n ; i++){     //loop
        if(n%i==0){                 //condition
            printf("%d ",i);
        }
    }

    return 0;
}                                   //end