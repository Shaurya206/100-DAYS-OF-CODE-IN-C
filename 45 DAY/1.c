//Count frequency of a given character in a string.

#include<stdio.h>
int main(){

    char str[100];
    char ch;

    printf("enter the string: ");  //taking string input
    gets(str);

    printf("enter the char you want to check: "); //taking char input which the user wnat to check
    scanf(" %c",&ch);

    int count = 0;

    for(int i = 0 ; str[i] != '\0' ; i++){   //loop to check how many times the char appered in the string
        if(str[i] == ch){
            count++;
        }
    }

    printf("frequency of %c in %s is: %d\n",ch,str,count);   //output

    return 0;
}                              //end