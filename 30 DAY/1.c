//Count even and odd numbers in an array.

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

    int count_even = 0;
    int count_odd = 0;

    for(int j = 0 ; j < size ; j++){       //loop to find how many even and odd elements are there in the array
        if(array[j]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }

        printf("the number of even elements in array is: %d\n",count_even);    //output(number of even values)
        printf("the number of odd elements in array is: %d\n",count_odd);      //output(number of odd values)

        return 0;
}                           //end
    