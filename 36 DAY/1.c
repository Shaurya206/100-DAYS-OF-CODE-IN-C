//Read and print a matrix.

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
    
    for(int i = 0 ; i < row ; i++){          //loop  to print all the values stored in 2D array
        for(int j = 0 ; j < columb ; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");        //next line for every new row
    }

    return 0;
}                         //end