#include <stdio.h>
#include <conio.h>

// Questions - Write a program that takes 10 integer as input and find their sum.
// From Array

// Solution:

void main(){
    int a[10],i,sum=0;

    printf("Enter the numbers:\n");
    for(i=0;i<10;i++){
        printf("Enter the Value %d:\t",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++){
        sum += a[i];
    }

    printf("The sum of the given numbers is %d",sum);


}