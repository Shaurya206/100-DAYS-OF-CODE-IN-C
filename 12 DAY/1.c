//Write a program to calculate a library fine based on late days.


#include<stdio.h>
int main (){

    int day;

    printf("number of late days: ");      //input
    scanf("%d",&day);

    if(day>=1 && day<5){                  //condition
        printf("fine: %d rupee\n",day*2); 
    }
    else if (day>=5 && day<15){
        printf("fine: %d rupee\n",day*4);
    }
    else if(day>=15 && day<=31){
        printf("fine: %d rupee \n",day*6);
    }
    else{
        printf("Membership Cancelled");    //if the days are more than 31 then the membership is cancelled
    }

    return 0;
}                                          //end 