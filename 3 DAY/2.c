//Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main(){

    int a,b,c;

    
    printf("enter first number: ");
    scanf("%d",&a);                           //if a = 2

    printf("enter second number: ");
    scanf("%d",&b);                          //if b = 3

    c = a;                    // now c = 2
    a = b;                    // now a = 3 
    b = c;                    // now b = 2


    printf("%d %d",a ,b);

    return 0;

}                            // end