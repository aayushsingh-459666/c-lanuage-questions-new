#include <stdio.h>
#include <conio.h>

// Questions - find the reverse of the given string without using libirary function.

// Solution

void main(){
    int i=0,c=0;
    char a[100];

    printf("Enter the string:\t");
    scanf("%s",&a);

    while(a[i]!='\0'){
        i++;
        c++;
    }
    c--;
    
    while(c>=0){
        printf("%c",a[c]);
        c--;
    }






}