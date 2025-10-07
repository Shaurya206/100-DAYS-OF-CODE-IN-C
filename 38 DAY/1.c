//Add two matrices.

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

    int row1 , columb1;
 
    printf("enter the number of rows for second matrix: ");       //input to initialize how many rows will be there in second array
    scanf("%d",&row1);

    printf("enter the number of columbs for second matrix: ");    //input to initialize how many columbs will be there in second array
    scanf("%d",&columb1);

    int array1[row1][columb1];

    for(int i = 0 ; i < row1 ; i++){          //loop to store the values in array given by the user
        for(int j = 0 ; j < columb1 ; j++){
            printf("enter the value: ");
            scanf("%d",&array1[i][j]);
        }
    }

    int arra[row][columb];   //new array to store the sum values
    int temp = 0;

    if(row == row1 && columb == columb1){                   //condition if both the metrices perimeter are same then only it will execute
        for(int i = 0 ; i < row ;i++){                 //loop to sum the values 
            for(int j = 0 ; j < columb ;j++){
                arra[i][j] = array[i][j] + array1[i][j];
            } 
        }
        temp = 1;
    }

    if(temp == 1){
        for(int i = 0 ; i < row ; i++){       //loop to print all the sum values 
            for(int j = 0 ; j < columb ; j++){
                printf("%d ",arra[i][j]);
            }
            printf("\n");   //nest line
        }
    }
    else{
        printf("enter the same parameters for both the arrays!!\n");   //executes only if both array perimeters are not same 
    }

    return 0;
}                          //end