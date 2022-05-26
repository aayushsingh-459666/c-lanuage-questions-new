#include <stdio.h>
#include <conio.h>

// Question - fint the reverse of the given number

// Solution

void main(){
    int a, b,i,r,re=0;

    printf("Enter the number:\t");
    scanf("%d",&a);
    b = a;
    
    while(a!=0){
        r = a%10;
        re = (re*10)+r;
        a = a/10;
    }

    printf("The reverse of %d is %d. ",b,re);
}