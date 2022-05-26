#include <stdio.h>
#include <conio.h>

// Question - Write a program that finds wheather the given number is armstrong or not.
// Armstrong number means - a number in which sum of cube of all digits  are equal. For e.g. - The given number =  111 and cube of 1 + cube of 1 + cube of 1 is equal to the given number 111. So it is palindrome number.

// Solution

void main(){
    int a,b,r,p=0;

    printf("Enter your number:\t");
    scanf("%d",&a);
    b = a;

    while(a!=0)
    {
        r = a%10;
        p = (r*r*r)+p;
        a = a/10;
    }

    if(b==p){
        printf("The given number %d is armstrong.",b);
    }
    else
    {
        printf("The given number %d isn't armstrong.",b);
    }
}