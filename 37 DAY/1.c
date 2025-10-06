//Find the sum of each row of a matrix and store it in an array.

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

    int row_sum[row];

    for(int i = 0 ; i < row ; i++){      //loop to sum all the row values
        int sum = 0;
        for(int j = 0 ; j < columb ; j++){
            sum += array[i][j];
        }
        row_sum[i] = sum;
    }

    for(int i = 0 ; i < row ; i++){    //output printing all the row values stored in an array
        printf("%d ",row_sum[i]);
    }

    return 0;
}                          //end