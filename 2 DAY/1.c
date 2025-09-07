//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main (){

    float a,b,area,perimeter;

    
    printf("enter lenght: ");             // input length
    scanf("%f",&a);

    printf("enter breadth: ");            // input breadth
    scanf("%f",&b);

    area = a*b;
    perimeter = 2*(a + b);

    printf("area is: %.2f\nperimeter is: %.2f\n",area,perimeter);

    //%.2f is used so it only gives an output of 2 decimal palces 


    return 0;
                                   
}                                               // end