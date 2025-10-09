//Find the sum of main diagonal elements for a square matrix.

#include<stdio.h>
int main(){

    int row , columb;
 
    printf("enter the number of rows for matrix: ");       //input to initialize how many rows will be there in first array
    scanf("%d",&row);

    printf("enter the number of columbs for matrix: ");    //input to initialize how many columbs will be there in first array
    scanf("%d",&columb);

    int array[row][columb];

    for(int i = 0 ; i < row ; i++){          //loop to store the values in array given by the user
        for(int j = 0 ; j < columb ; j++){
            printf("enter the value: ");
            scanf("%d",&array[i][j]);
        }
    }

    int sum = 0;

   if(row == columb){                     //condition to check if the matrix is a square matrix
    for(int i = 0 ; i < row ; i++){       //loop to sum all the main diagnol digits
        sum = sum + array[i][i];
    }
    printf("the sum of main diagnol is: %d\n",sum);
   }
   else{
    printf("the row and columb should be same (it should be a square matrix)\n");   //it will be printed if the matrix is not a  square matrix
   }

   return 0;
}                              //end