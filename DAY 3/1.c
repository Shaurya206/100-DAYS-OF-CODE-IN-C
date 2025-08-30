//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
       
    float C,F;               //floating value(decimal)

    printf("celcius :");     // input    
    scanf("%f",&C);

    F = (C*1.8)+32;

    printf("fahrenheit :%.2f",F);

    //%.2f is used so it only gives an output of 2 decimal palces 

    return 0;

}                          // end