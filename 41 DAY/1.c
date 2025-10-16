//count characters in a string without using built-in length functions.

#include<stdio.h>
int main(){

    char string[100];             //declaring string
   
    printf("enter a string: ");      //input a string
    scanf("%s",&string);

    int count = 0;

    for(int i = 0 ; string[i] != '\0' ; i++){   //loop to count the length of the string
        count++;
    }

    printf("the length of the string is: %d\n",count);   //output 

    return 0;
}                    //end