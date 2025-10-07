//Check if a matrix is symmetric.

#include<stdio.h>
int main(){

    int row , columb;
 
    printf("enter the number of rows for first matrix: ");       //input to initialize how many rows will be there in first array
    scanf("%d",&row);

    printf("enter the number of columbs for first matrix: ");    //input to initialize how many columbs will be there in first array
    scanf("%d",&columb);

    int array[row][columb];

    for(int i = 0 ; i < row ; i++){          //loop to store the values in array given by the user
        for(int j = 0 ; j < columb ; j++){
            printf("enter the value: ");
            scanf("%d",&array[i][j]);
        }
    }

    int trans[row][columb];

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < columb ; j++){
            trans[i][j] = array[j][i];
        }
    }

    int output = 1;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < columb ; j++){
            if(trans[i][j] != array[i][j]){
                output = 0;
                break;
            }
        }
    }

    if(output == 1){
        printf("\nTRUE\n");
    }
    else{
        printf("\nFALSE\n");
    }
    
    return 0;
}