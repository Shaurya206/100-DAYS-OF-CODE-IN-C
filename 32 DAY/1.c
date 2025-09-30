//Merge two arrays.

#include<stdio.h>
int main(){

    int size;

    printf("enter the size of array: ");      //input to declare the array size
    scanf("%d",&size);

    int array[size];

    for(int i = 0 ; i < size ; i++){           //loop to store value in array
        printf("enter the %d value: ",i+1);
        scanf("%d",&array[i]);
    }

    int size1;

    printf("enter the size of array: ");      //input to declare the array size
    scanf("%d",&size1);

    int array1[size1];

    for(int i = 0 ; i < size1 ; i++){           //loop to store value in array
        printf("enter the %d value: ",i+1);
        scanf("%d",&array1[i]);
    }

    int merged_array[size+size1];
    int j,h;

    for( j = 0 ; j < size ; j++){         //loop to store values from 1st array to new one
        merged_array[j] = array[j];
    }

    for( h = 0 ; h < size1 ; h++){       //loop to store values from 1st array to new one
        merged_array[j+h] = array1[h];
    }

    for(int m = 0 ; m < size1+size ; m++){   //loop to print all the values of the new merged array
        printf("%d ",merged_array[m]);
    }

    return 0;
}                                   //end