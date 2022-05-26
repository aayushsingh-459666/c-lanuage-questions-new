#include <stdio.h>
#include <conio.h>

// Question - Print the given sequence:
// 1
// 12
// 123
// 1234

// Solution

void main()
{
    int i,j;

    for(i=1;i<5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}