// Program to find Sum and product of a user given number.

#include <stdio.h>

int sumOfDigits(int);
int productOfDigits(int);
void choose(int);
int main(){
    int digit;
    printf("Enter a digit you want to perfom the operation:- ");
    scanf("%d",&digit);
    choose(digit);
    
    return 0;
}
int sumOfDigits(int n)
{
    int sum=0,rem;
    while (n!=0){
        rem=n%10;
        sum += rem;
        n/=10;
    }
    return sum;

}
int productOfDigits(int n)
{
    int product=1,rem;
    while (n!=0){
        rem=n%10;
        product *= rem;
        n/=10;
    }
    return product;

}


void choose(int digit)
{
    int userChoice;
    printf("Press 1 for sum of Digits and 2 for product:- ");
    scanf("%d",&userChoice);
    if (userChoice==1){
       printf("Sum of digits of your number is %d",sumOfDigits(digit));
    } 
    else if (userChoice==2)
    {
        printf("Product of digits of your number is %d",productOfDigits(digit));
    }
    else{
        printf("Enter 1 or 2");
        choose(digit);
    }
}
