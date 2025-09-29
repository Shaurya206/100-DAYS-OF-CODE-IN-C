//Reverse an array without taking extra space.

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

    int reversed_array[size];          //created new array to store new reversed values

    int start = size - 1;

    for(int j = 0; j < size ; j++){    //loop to store values in new array
       reversed_array[start]=array[j];
        start--;
    }

    for(int i = 0 ; i < size ; i++){        //loop to print the values of new reversed array
        printf("%d ",reversed_array[i]);
    }

    return 0;
}                          //end