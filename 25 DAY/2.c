//Write a program to print the following pattern:
// *****
// ****
// ***
// **
// *
#include<stdio.h>
int main(){

    int n;

    printf("enter the number of rows: ");     //input
    scanf("%d",&n);

    for(int i = n ; i>=1 ; i--){
        for(int j = i ; j>=1 ; j--){      //nested loop
            printf("*");
        }
        printf("\n");      //for next line
    }
    return 0;
}                           //end