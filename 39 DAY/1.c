//Check if the elements on the diagonal of a matrix are distinct.

#include<stdio.h>
int main(){
    
    int n;
 
    printf("enter the number of rows and columb you want in a square matrix: ");       //input to initialize how many rows will be there in first array
    scanf("%d",&n);

    int array[n][n];

    for(int i = 0 ; i < n ; i++){          //loop to store the values in array given by the user
        for(int j = 0 ; j < n ; j++){
            printf("enter the value: ");
            scanf("%d",&array[i][j]);
        }
    }

    int maindig[n];
    int secdig[n];
    int all[n*2];

    for(int i = 0 ; i < n ; i++){      //loop to pick main diagnol values
        maindig[i] = array[i][i];
    }

    for(int i = 0 ; i < n ; i++){                //loop to pick second diagnols from matrix
        secdig[i] = array[i][n - 1 - i];
    }

    for(int i = 0 ; i < n ; i++){           //loop to store main diagnol in new array
        all[i] = maindig[i];
    }

    for(int i = n ; i < n*2 ; i++){           //loop to store second diagnol values in new array
        all[i] = secdig[i-n];
    }

    int result = 1;

    for(int i = 0 ; i < n*2 ; i++){                     //loop to comapare all the values to confirm  its a distinct matrix 
        for(int j = i+1 ; j < n*2 ; j++){
            if(all[1] && all[4]){
                continue;
                if(all[i] == all[j]){
                result = 0;
                break;
            }
            }
        }
        if(!result){
            break;
        }
    }
    

    if(result == 1){
        printf("TRUE");    //output
    }
    else{
        printf("FALSE");    //output
    }

    return 0;
}                         //end