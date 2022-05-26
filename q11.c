#include <stdio.h>
#include <conio.h>

// Question - Write a program that finds wheather the given number is palindrome or not.
// Palindrome means same after when the number is reversed. For e.g. given no. is 121 and its reverse is also 120. So it is palindrome.

// Solution

void main()
{
    int a,b,r,re=0;


    printf("Enter the number:\t");
    scanf("%d",&a);
    b = a;

    while(a!=0)
    {
        r = a%10;
        re = (re*10)+r;
        a  = a/10;
    }

    if(b==re)
    {
        printf("The given number %d is palindrome.",b);
    }

    else{
        printf("The given number %d isn't palindrome.",b);
    }


}