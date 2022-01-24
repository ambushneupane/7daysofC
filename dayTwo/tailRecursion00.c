/* factorial of user given number with tail recursion approach */
#include <stdio.h>
int fact(int n, int result) {
    if(n==0||n==1) return result;
    return fact(n-1,n*result);
}
int main(){
    int number;
    printf("Enter  the number to get it's factorial:-");
    scanf("%d",&number);
     printf("Factorial of %d is %d",number,fact(number,1));
     return 0;
}

