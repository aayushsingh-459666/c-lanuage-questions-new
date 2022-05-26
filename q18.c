#include <stdio.h>
#include <conio.h>

// Question - Write a program that takes 10 integers as input and sort them in descending order.


// Solution

void main(){
    int a[10],i,j,temp;

    printf("Enter the 10 numbers:\n");
    for(i=0;i<10;i++){
        printf("Input %d :\t",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++){
        for(j=i;j<10;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    printf("The sorted numbers in descending orders are:\n");
    for(i=0;i<10;i++){
        printf("%d \n",a[i]);
    }
    
}