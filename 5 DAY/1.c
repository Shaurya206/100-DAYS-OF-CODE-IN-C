//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>                        //math.h library added so we can use the "pow" function
int main (){

    float P,R,T,simple_interest,compund_interest,X;

    printf("enter principal: ");            //input principal
    scanf("%f",&P);

    printf("enter Rate: ");                 //enter rate
    scanf("%f",&R);

    printf("enter Time: ");                 // enter time
    scanf("%f",&T);

    simple_interest = (P*R*T)/100;
    X = pow(1 + R/100,T);                  //"pow" function is used for power
    compund_interest = P*X;    

    printf("simple interest: %.2f\n",simple_interest);
    printf("compound interest:%.2f\n",compund_interest);

    //%.2f is used so it only gives an output of 2 decimal palces 

    return 0;

}                                          // end                 