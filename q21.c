#include <stdio.h>
#include  <conio.h>

// Question - Find the difference between 2x2 A and B matrix and print them.

void main(){
    int a[2][2],b[2][2],s[2][2],i,j,temp;


    printf("Enter the values for A matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Input %dx%d :\t",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the values for B matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Input %dx%d :\t",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            s[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("The difference of A and B matrix are given below:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d \t",s[i][j]);
        }
        printf("\n");
    }

}