#include <stdio.h>
#include <conio.h>

// Question - Print the given sequence:
// 5
// 54
// 543
// 5432
// 54321


// Solution

void main()
{
    int i,j;

    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d",j);
        }

        // Another way:
        // for(j=5;j>=i;j--)
        // {
        //     printf("%d",j);
        // }

        printf("\n");
    }

    
}