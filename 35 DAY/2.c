//Rotate an array to the right by k positions. in c

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


    int k;

    printf("enter position to rotate: ");
    scanf("%d",&k);

    k = k % size;

    for(int i = 0 ; i < k ; i++){
        int temp = array[size - 1];
        for(int j = size - 1 ; j > 0 ; j--){
            array[j] = array[j -1];
        }
        array[0] = temp;    
    }

    for(int i = 0 ; i < size ; i++){
        printf("%d ",array[i]);
    }

    return 0;
}