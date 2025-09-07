//Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main (){

    int a,b,c ;

    printf("enter first number: ");      //first input
    scanf("%d",&a);

    printf("enter second number: ");     //second input
    scanf("%d",&b);

    printf("enter third number: ");      //third input
    scanf("%d",&c);

    if(a>b && a>c){                      //condition
        printf("the largest number amoung the three is: %d\n",a);
    }
    else if(b>c && b>a){
        printf("the largest number amoung the three is: %d\n",b);    // "&&" gives true only if both or more than 2 conditions stated all are true
    }
    else{
        printf("the largest number amoung the three is: %d\n",c);
    }

    return 0;
     
}                                        // end