//Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>        //we have to use this library so we can use the sqrt function

int main(){

    int a,b,c;
    float discriminant,X1,X2,x1,x2;

   printf("enter the value of A: ");     //input A
   scanf("%d",&a);

   printf("enter the value of B: ");     //input B
   scanf("%d",&b);

   printf("enter the value of C: ");     //input C
   scanf("%d",&c);

   discriminant = sqrt(b*b - 4.0*a*c);    //sqrt means square root

   X1 = (-b + discriminant);
   X2 = (-b - discriminant);

   x1 = X1/(2.0*a);
   x2 = X2/(2.0*a);

   printf("square root of the given quadratic equation are %.2f and %.2f\n",x1,x2);

   return 0;
}                                      //end