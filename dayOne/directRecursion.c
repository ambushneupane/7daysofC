//recursion 
/* Types of recursion:-
1) Direct Recursion ( calls itself )
2) Indirect Recursion ((func1)calls the other function(func2) which again calls the previous function (func1) )
3) Tail Recursion
4) Non-Tail Recursion

*/

/* Direct Recursion.
 Program to find the fibonacci series upto user given number.*/


#include<stdio.h>
int fibo(int);
int main(){ 
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
   printf("The fibo number is %d",fibo(number));
    return 0;
}
int fibo(int n){
    if (n==1||n==2){
        return 1;
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}



