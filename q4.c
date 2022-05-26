#include <stdio.h>
#include <conio.h>

// Question - print the given series 5,10,15,20,25 -- 12th term.

void main(){
    int a=5,i;

    for(i=1;i<=12;i++){
        printf("%d \n",a);
        a  = a+5;
    }
    getch();
}