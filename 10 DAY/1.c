//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main (){

    int a,b,c;

    printf("enter the lenght of first side: ");     // input of first side
    scanf("%d",&a);    

    printf("enter the length of second side: ");   // input of second side 
    scanf("%d",&b); 
 
    printf("enter the length of third side: ");    // input of third side 
    scanf("%d",&c);  

    if(a==b && b==c && c==a){                    //condition
        printf("it is an equilateral triangle");
    }
    else if(a!=b && b!=c && c!=a ){
        printf("it is an scalene triangle");
    }
    else {
        printf("it is an isosceles triangle");
    }
    
    return 0;
}                                    //end