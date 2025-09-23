//Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

#include<stdio.h>
int main (){


    for(int i = 1 ; i<=17 ; i++){            //loop
        if(i==2 || i==6 || i==12 || i==16){    //condition for empty new lines
            printf("\n");                     //new line
        }
        else{
            printf("*\n");      //printing the * pattern
        }
    }

    return 0;
}                     //end