//Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main(){

    int a,b,hcf;

    printf("enter the first number: ");
    scanf("%d",&a);

    printf("enter the second number: ");
    scanf("%d",&b);

    int max;

    if(a>b){
        max = a;
    }
    else{
        max = b;
    }

    for(int i = 1 ; i<= max ; i++){
        if((a%i==0) && (b%i==0)){
            hcf = i;
        }
    }
    printf("the HCF is: %d\n",hcf);

    return 0;
}
