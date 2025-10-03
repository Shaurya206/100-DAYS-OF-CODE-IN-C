//Insert an element in an array at a given position.

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

    int position,element;

    printf("enter the element you want to insert: ");   //input element we want to insert
    scanf("%d",&element);

    printf("enter the position you want to enter the element: ");   //input the position
    scanf("%d",&position);

    for(int i = size - 1 ; i >= position ; i--){    //loop to make space for the new elemet
        array[i+1] = array[i];
    }
     
    array[position] = element;    //inserting new elemet at the empty space
    size++;

    for(int i = 0 ; i < size ; i++){    //printing the new array with new element inserted
        printf("%d ",array[i]);
    }

    return 0;
}                         //end