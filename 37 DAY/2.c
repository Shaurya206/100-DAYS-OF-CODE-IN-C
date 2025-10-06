//Find the transpose of a matrix.

#include<stdio.h>
int main(){

   int row , columb;
 
    printf("enter the number of rows: ");       //input to initialize how many rows will be there in array
    scanf("%d",&row);

    printf("enter the number of columbs: ");    //input to initialize how many columbs will be there in array
    scanf("%d",&columb);

    int array[row][columb];

    for(int i = 0 ; i < row ; i++){          //loop to store the values in array given by the user
        for(int j = 0 ; j < columb ; j++){
            printf("enter the value: ");
            scanf("%d",&array[i][j]);
        }
    }
    
    for(int i = 0 ; i < columb ; i++){      //loop to print the transpose of the original matrix
        for(int j = 0 ; j < row ; j++){
            printf("%d ",array[j][i]);      //here row is replaced with columb and columb is replaced with row 
        }
        printf("\n");     //next line
    }

    return 0;
}                           //end