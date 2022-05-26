#include <stdio.h>
#include <conio.h>

// Question - Find the sum of digits of the given number.

// Solution 

void main(){
    int a,r,s=0,i;

    clrscr();
    printf("Enter the number:\t");
    scanf("%d",&a);

    while(a!=0)
    {
        r = a%10;
        s  = (r+s);
        a = a/10;
    }

    printf("The sum of digits is %d",s);
    getch();
}