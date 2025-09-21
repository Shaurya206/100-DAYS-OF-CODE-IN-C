//Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

#include<stdio.h>
int main(){

    int n;

    printf("enter the number of rows: ");     //input
    scanf("%d",&n);

    for(int i = n ; i>=1 ; i--){   
        for(int j = i ; j<=n ; j++){      //nested loop
            printf("%d",j);
        }
        printf("\n");     //for next line
    }

    return 0;
}                         //end