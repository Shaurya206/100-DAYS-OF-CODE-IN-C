//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main (){

    char  a;

    printf("enter alphabet: ");         // input
    scanf("%s",&a);                     // 's' denotes string

    if(a == 'a'|| a =='e'||a =='i'||a =='o'||a == 'u'){             //condition

     //we have to commas because we have takes input as a string 

        printf("it is a vovel");
    }
    else{
        printf("it is not a vovel");
    }
    
    return 0;

}                                      // end