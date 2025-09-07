//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main (){

    char n;     //char denoted character

    printf("enter: ");           //input
    scanf("%s",&n);             // "s" denotes string
    
    if(n>='a' && n<='z'){               // condition
        printf("it is a lower case");
    }
    else if(n>='A' && n<='Z'){
        printf("it is a upper case");
    }
    else if(n>= '0' && n<='9'){
        printf("it is a digit");
    }
    else{
        printf("it is a special character");
    }

    //we have to use commas because we have takes input as a string

    return 0;

}                                      // end