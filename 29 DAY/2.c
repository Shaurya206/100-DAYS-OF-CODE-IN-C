//Find the maximum and minimum element in an array.

#include<stdio.h>
int main(){

     int size;

    printf("enter the size of array: ");     //input to declare the array size
    scanf("%d",&size);

    int array[size];

    for(int i = 0 ; i<size ; i++){                 //loop for taking input and storing them in array
        printf("enter the %d value: ",i+1);
        scanf("%d",&array[i]);
    }

    int max = array[0];
    int min = array[0];

    for(int j = 0 ; j < size ; j++){
        if(array[j] > max){
            max = array[j];
        }
        if(array[j] < min){
            min = array[j];
        }
    }

    printf("max value in the array is: %d\n",max);
    printf("mim value in the array is: %d\n",min);

    return 0;
}