//Find the second largest element in an array.

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

    int largest = array[0];         //assuming largest value is the first value of the array
    int sec_largest = array[1];     //assuming the second largest value is the second value of the array
    int temp;

    if(largest < sec_largest){    //loop to fix if second largest is greatet than largest value
        temp = largest;
        largest = sec_largest;
        sec_largest = temp;
    }

    for(int i = 2 ; i < size ; i++){   //loop to find second largest value
        if(array[i] > largest){
            sec_largest = largest;
            largest = array[i];
        }
    }

    printf("the second largest number in the array is: %d\n",sec_largest);   //output the second largest value

    return 0;
}                 //end