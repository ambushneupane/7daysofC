#include <stdio.h>

void salaryIncrease(int *var,int b){
    *var =*var +b;

}

int main(){
    int salary =0, increment = 0;
    printf("Enter your current Salary:-");
    scanf("%d",&salary);
    printf("Enter the increment you want:-");
    scanf("%d",&increment);
    salaryIncrease(&salary,increment);
    printf("Your Final salary is : %d",salary);
    return 0;

}