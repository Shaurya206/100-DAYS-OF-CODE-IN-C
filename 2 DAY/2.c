//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main (){

    float r,area,circumference,pi;

    pi = 3.14;                                          // stored value of pi in "pi"

    printf("enter the radius of the circle: ");        //input of radius of the circle
    scanf("%f",&r);

    area = 2*pi*r*r;
    circumference = 2*pi*r;

    printf("area is: %.2f\ncircumference is: %.2f\n",area,circumference);

    //%.2f is used so it only gives an output of 2 decimal palces 

    return 0;

}                                                     // end