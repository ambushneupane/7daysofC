// Program to add 1 if the number is odd and subtract 1 if the number is even using indirect recursion 
/*Indirect recursion is a recursion in which (func1)calls the other function(func2) which again calls the previous function (func1))  */

#include <stdio.h>
int num=1;
int odd(int upto);
int even(int upto);

int main(){
    int upto;
    printf("How many numbers do you want:-");
    scanf("%d",&upto);

    odd(upto);

    return 0;
}

int even(int upto){
    if (num<=upto){
        printf("%d  ",num-1);
        num++;
        odd(upto);
    }    
}
int odd(int upto){
    if(num<=upto){
        printf("%d  ",num+1);
        num ++;
        even(upto);
    }
}
