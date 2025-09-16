//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main(){

    char ch;

    printf("Enter a binary number: ");


    while ((ch = getchar()) < '2'){
        if(ch == '1'){
            putchar('0');
        }
        else if(ch == '0'){
            putchar('1');
        }
        else{
            printf("\nInvalid input: %c", ch);
        }
    }

    return 0;
}
