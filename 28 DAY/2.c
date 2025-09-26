//Read and print elements of a one-dimensional array.

#include<stdio.h>
int main(){

    int size;

    printf("enter the size of array: ");
    scanf("%d",&size);

    int array[size];

    for(int i = 0 ; i< size ; i++){
        printf("enter the %d value: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\n");

    for(int j = 0 ; j < size ; j++){
        printf("%d ",array[j]);
    }

    return 0;
}