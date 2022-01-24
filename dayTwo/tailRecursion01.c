/* Sum of first n natural numbers using tail recursion approach */
#include <stdio.h>
int sum(int num, int res){
    if (num==1){
        return res;
    }  
    else
        sum(num-1,res+num);
}
int main(){
    int number;
    printf("Enter  the number to get sum:-");
    scanf("%d",&number);
    printf("Sum of first %d natural numbers is %d.",number,sum(number,1));
    return 0;
} 