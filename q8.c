#include <stdio.h>
#include <conio.h>

// Question - find the given number is prime or compoite number

// Solution 
void main(){
    int a,p=0,i;

    printf("Enter the number:\t");
    scanf("%d",&a);


    for(i=1;i<=a;i++){
        if(a%i==0){
            p +=1;
        }
    }

    // if prime
    if (p==2)
    {
        printf("%d is a Prime Number.",a);
    }
    
    else{
        printf("%d is a Comosite Number.",a);
    }
}