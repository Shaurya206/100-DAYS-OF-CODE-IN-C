//Search for an element in an array using linear search.

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

    int find;

    printf("enter the value you want to find: ");  //input for the value you want to find in the array
    scanf("%d",&find);

    int j;
    int found = 0;

    for(j = 0 ; j < size ; j++){        //loop to check the position and value
        if(array[j]==find){
            found += 1;
            break;
        }
    }

    if(found==1){
        printf("the value %d was found at %d position in array\n",find,j+1);   //executes only if the value is found in the array
    }
    else{
        printf("the value was not found in the array\n");     //executes only if the value is not found in the array     
    }

    return 0;
}              //end