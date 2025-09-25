//Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>
int main(){
    
    int i,j;
    int n = 5; 

    for(i = 1; i <= n; i++){           //upper part
        for(j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i = n-1; i >= 1; i--){        //lower part
        for(j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}                      //end