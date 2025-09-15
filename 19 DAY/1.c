//Write a program to find the LCM of two numbers.

#include<stdio.h>

int main (){

    int a,b,lcm;

    printf("enter first number: ");       //input
    scanf("%d",&a);

    printf("enter second number: ");      //2nd input
    scanf("%d",&b);

    if(a>b){                               //condition 
        lcm = a;
    }
    else{
        lcm = b;
    }

    int lcm1 = lcm;

    while(lcm%a !=0 || lcm%b !=0){         //loop
        lcm = lcm +lcm1;
    }
    
    printf("the lcm of %d and %d is %d",a,b,lcm);   //output

    return 0;
}                         //end