// Program to add Two numbers using Pointers

#include <stdio.h>

int main(){
    int numOne,numTwo,*ptrOne,*ptrTwo,sum;
    printf("Enter First number:- ");
    scanf("%d",&numOne);
     printf("Enter Second number:- ");
    scanf("%d",&numTwo);

    ptrOne=&numOne;
    ptrTwo=&numTwo;
    
    sum= *ptrOne+*ptrTwo;

    printf("Sum of numbers is %d",sum);
    
    

    return 0;
}