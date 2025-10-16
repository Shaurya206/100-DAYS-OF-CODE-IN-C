//Print each character of a string on a new line.

#include<stdio.h>
int main(){

    char string[100];             //declaring string
   
    printf("enter a string: ");      //input a string
    scanf("%s",&string);

    for(int i = 0 ; string[i] != '\0' ; i++){   //loop to print each character in new line
        printf("%c\n",string[i]);
    }

    return 0;  
}                            //end