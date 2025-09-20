//Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345

#include<stdio.h>
int main(){

    int n;

    printf("enter the number of rows: ");     //input
    scanf("%d",&n);

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++){         //nested loop
            printf("%d",j);
        }
        printf("\n");                         //for next line
    }

    return 0;
}                               //end