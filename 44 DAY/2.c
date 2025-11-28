//Replace spaces with hyphens in a string.

#include<stdio.h>
int main(){

    char str[50];

    printf("enter the string: "); //input from the user
    gets(str);

    for(int i = 0 ; str[i] != '\0' ; i++){   //loop to check the spces and change them with -
        if(str[i] == ' '){
            str[i] = '-';
        }
    }

    printf("the sting after the changes: %s\n",str);  //output

    return 0;
}                       //end