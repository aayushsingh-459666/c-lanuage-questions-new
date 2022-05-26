#include <stdio.h>
#include <string.h>
#include <conio.h>

// Question - Write a program that reverse the given string

void main(){
    char a[100];
    printf("Enter anything in string:\t");
    scanf("%s",&a);
    strrev(a);
    printf("The require reverse is  \n %s",a);
}