//Find the sum of array elements.

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

    int sum = 0;    

    for(int j = 0 ; j<size ;j++){            //loop so we can sum all the elements
        sum += array[j];
    }

    printf("the sum of all elements of the array is: %d\n",sum);      //output

    return 0;
}                             //end