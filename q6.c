#include <stdio.h>
#include <conio.h>

// Question -  find the factor of the given number.

// Solution
void main(){
    int a,i;

    printf("Enter your number:\t");
    scanf("%d",&a);

    printf("The factors of %d are: ",a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            printf("%d \t",i);
        }
    }
    getch();

}