//Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include<stdio.h>
int main (){

    int i,t,j,n;

    printf("enter the numbeof rows: ");   //input
    scanf("%d",&n);

    for(i = n ; i>= 1 ; i--){      //loop for new line
        for(t=1;t<=i;t++){         //loop for spaces
            printf(" ");
        }
        for(j=i;j<=n;j++){        //loop for printing numbers
                printf("%d",j);
            }
            printf("\n");      //next line
    }

    return 0;
}                                //end