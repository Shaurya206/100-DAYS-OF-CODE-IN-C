//Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main (){

    int n;

    printf("enter marks: ");       //input marks
    scanf("%d",&n);

    if(n<=100 && n>=0){          // condition so user does not enter not valid values
        if(n>90 && n<=100){
            printf("grade A");
        }
        else if(n>80 && n<=90){
            printf("grade B");
        }
        else if(n>70 && n<=80){
            printf("grade C");
        }
        else if(n>60 && n<=70){    //conditions
            printf("grade D");
        }
        else if(n>50 && n<=60){
            printf("grade E");
        }
        else{
            printf("grade F");
        }
    }
    else{
        printf("enter valid value");     // this will execute if the user will input negative or value above 100
    }
    return 0;
}                                       //end