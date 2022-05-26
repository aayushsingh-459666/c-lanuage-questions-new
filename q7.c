#include <stdio.h>
#include <conio.h>

// Question - Write a program to find the factorial of the givne number.

void main(){
    int a,i,fe=1;

    printf("Enter the number:\t");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        fe = fe*i;
    }
    printf("The factorial of %d is %d",a,fe);
    getch();
}