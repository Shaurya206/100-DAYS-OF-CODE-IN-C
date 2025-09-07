//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main (){

    int input;
    float second,minutes,hours;

    printf("enter time in second:");     //input
    scanf("%d",&input);

    if(input>=0){                       // 'if' condition is added for if the user input negative values 
        second = input;
        minutes = input/60;
        hours = minutes/60;

        printf("seconds:%.2f\nminutes:%.2f\nhours:%.2f\n",second,minutes,hours);

        //%.2f is used so it only gives an output of 2 decimal palces
    }
    else{
        printf("enter valid values");
    }

    return 0;

}                                      // end