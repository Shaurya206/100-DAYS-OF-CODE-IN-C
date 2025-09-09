//Write a program to print numbers from 1 to n.
#include<stdio.h>
int main(){

    int n;

    printf("enter the number n: ");         //input of n 
    scanf("%d",&n);


    for(int i = 1 ; i<=n ; i++){                //loop
        printf("%d\n",i);                       //i++ uses the i value and then increase it by 1
    }
    return 0;
}                                            //end