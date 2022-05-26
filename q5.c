#include <stdio.h>
#include <conio.h>

// Question - print the given seris 1,11,111,1111, --- 10th term

// Solution
void main(){
    int a=1,i;
    
    for(i=1;i<=10;i++){
        printf("%d \n",a);
        a = (a*10)+1;
    }
    getch();
}