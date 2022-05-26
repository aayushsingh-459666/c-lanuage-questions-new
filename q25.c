#include <stdio.h>
#include <conio.h>
#include <string.h>

// Question - Write a program that takes 10 string value as input and sort them in descending order:

// Solution

void main(){
    int i,j;
    char a[100][10],temp[100];

    printf("Enter the values to sort:\n");
    for(i=0;i<10;i++){
        printf("Input %d :\t",i+1);
        scanf("%s",&a[i]);
    }

    for(i=0;i<10;i++){
        for(j=i;j<10;j++){
            if(strcmp(a[i],a[j])<0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }

    printf("The string in sorted form of descending order:\n");
    for(i=0;i<10;i++){
        printf("%s \n",a[i]);
    }
}