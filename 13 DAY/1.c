//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main(){

    int a,b,answer;
    char n;

    printf("enter the operator: ");        //input operator
    scanf("%c",&n);

    printf("enter first number: ");        //input forst number
    scanf("%d",&a);

    printf("enter second number: ");       //input second number
    scanf("%d",&b);


    switch(n){                          //switch
        case '+' :
         answer = a+b;
         printf("sum: %d\n",answer);
            break;

        case '-' :
         answer = a-b;
         printf("subtraction: %d\n",answer);
            break;

        case '*' :
         answer = a*b;
         printf("multiplication: %d\n",answer);
            break;

        case '/' :
         answer = a/b;
         printf("division: %d\n",answer);
            break;

        case '%' :
         answer = a%b;
         printf("modulo: %d\n",answer);
            break;

        default : printf("enter valid operator");       // if the user enter different operator other than the selected 6
    }

    return 0;
}                                            //end