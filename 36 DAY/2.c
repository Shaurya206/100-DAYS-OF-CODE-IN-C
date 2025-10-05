//Find the sum of all elements in a matrix.

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

    int sum = 0;

    for(int i = 0 ; i < row ; i++){          //loop so we can add all the values of the array
        for(int j = 0 ; j < columb ; j++){
            sum += array[i][j];
        }
    }

    printf("the sum of all elements of the array is: %d\n",sum);   //output the sum of all the elemets in the array

    return 0;
}                             //end