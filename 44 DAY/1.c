//Count spaces, digits, and special characters in a string.

#include<stdio.h>
int main(){

    char str[50];

    printf("enter the string: ");
    gets(str);                       //input from the user

    int spaces = 0;
    int digit = 0;
    int special_char = 0;

    for(int i = 0 ; str[i] != '\0' ; i++){      //loop to compare every character of string
        if(str[i] == ' '){
            spaces++;     //+1 only if there is a space
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            digit++;    //+1 only if there is a number between 0 to 9
        }
        else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){   //not doing anthing because we only counting spaces , number , special_char
        }
        else{
            special_char++;   //if nothing above is checked then only this is incrimented
        }
    }

    printf("spaces = %d    digit = %d    special char = %d",spaces,digit,special_char);  //output

    return 0;
}                          //end