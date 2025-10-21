//Reverse a string.

#include<stdio.h>
#include<string.h>    //used so we can use the (strlen) function
int main(){

    char str[] = "abcd";              //string takes as input

    int left = 0;
    int right = strlen(str) - 1;
    char tem;

    while(left < right){    //loop so we can reverse the array
        tem = str[left];
        str[left] = str[right];
        str[right] = tem;

        left++;
        right--;

    }

    printf("string after reverse: %s",str);    //output the reversed string

    return 0;
}                           //end