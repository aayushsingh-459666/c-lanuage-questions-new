#include <stdio.h>
#include <conio.h>

// Question - Write a program that takers the nth number of integer as input and sort them in ascending order

// Solution

void main(){
    int a[100],i,j,n,temp;

    printf("Enter the number of Input:\t");
    scanf("%d",&n);

    printf("Now enter the %d numbers of inputs:\n",n);
    for(i=0;i<n;i++){
        printf("Input %d :\t",i+1);
        scanf("%d",&a[i]);    
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("The sorted numbers in ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }

}