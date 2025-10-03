//Delete an element from an array.

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

    int position;

    printf("enter the position of element you want to delete: ");
    scanf("%d",&position);

    for(int i = position ; i < size -1  ; i++){
        array[i] = array[i + 1];
    }

    size--;

    for(int i = 0 ; i < size ; i++){
        printf("%d ",array[i]);
    }

    return 0;
}