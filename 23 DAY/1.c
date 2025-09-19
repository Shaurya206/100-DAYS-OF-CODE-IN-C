//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>
int main(){

    float n , num , numerator , denominator , fraction;

    printf("enter the number: ");    //input
    scanf("%f",&n);

    float sum = 0;
 
    for(int i = 1 ; i<=n ; i++){     //loop 
        numerator = 2.0*i;
        denominator = (3*i)+(i-1);
        fraction = (numerator/denominator);
        sum = sum + fraction;
    }

   printf("the sum is: %.2f\n",sum);     //output

    return 0;
}            //end