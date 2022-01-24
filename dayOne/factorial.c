// Factorial of user given number  using direct Recursion method.
#include <stdio.h>

int facto(int n){
    if (n==0|| n==1){   //stoping condition
        return 1;
    }
    else
        return n*facto(n-1);
}

int main(){
    int num;
    printf("Enter a  number to get factorial of it:-");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,facto(num));
}


/*WorkFlow
    suppose user entered 5, then,
        facto(5)==> 1) 5*facto(4)    4) 5*24=120  (cause facto(4)=24)
                    2)  4*facto(3)   3) 4*6=24    (cause facto(3)= 6)
                    3) 3*facto(2)    2) 3*2=6     (cause facto(2)=2)
                    4) 2*facto(1) => 1) 2*1=2     (we knew facto(2)=2)
                   
                   
 */

