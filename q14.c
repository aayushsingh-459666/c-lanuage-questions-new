#include <stdio.h>
#include <conio.h>

// Question print the given sequence:
// 1
// 22
// 333
// 4444
// 55555

// Solution

void main(){
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}