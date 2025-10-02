//Insert an element in a sorted array at the appropriate position.

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

    int value;

    printf("enter the value you want to insert: ");
    scanf("%d",&value);

    int position = -1;
    int i;

    for(i = 0 ; i < size ; i++){
        if(array[i] > value){
            position = i;
            break;
        }
    }

    if(position == -1){
        position = size;
    }

    for(i = size ; i > position ; i--){
        array[i] = array[i - 1];
    }

    array[position] = value;
    size++;

    for(i = 0 ; i < size ; i++){
        printf("%d ",array[i]);
    }

    return 0;
}