#include <stdio.h>
#include <conio.h>

// Questions - Print the given seris 3,6,9,12---15th term

void main(){
    int a=3,i;    
    for(i=1;i<=15;i=i+1){
        printf("%d \n",a);
        a = a+3;
    }
    getch();
}