//Count positive, negative, and zero elements in an array.

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

    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int j = 0 ; j < size ; j++){         //loop to count how many zeros,positive,negative values in array
        if(array[j] > 0){
            positive++;
        }
        else if(array[j] == 0){
            zero++;
        }
        else{
            negative++;
        }
    }

    printf("the number of positive values in array is: %d\n",positive);  //output(positive values)
    printf("the number of negative values in array is: %d\n",negative);  //output(negative values)
    printf("the number of zeros in the array: %d\n",zero);               //output(zero values)

    return 0;
}                          //end