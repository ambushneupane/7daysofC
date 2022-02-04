#include <stdio.h>

void findDenomation(int sum,int *thousands, int *fiveHundreds, int *hundreds, int *fifties, int *twenties, int *tens, int *fives, int *twos, int *ones)
{
    while (sum>= 1000){
        (*thousands)++;
        sum -=1000;
    }
    
    while (sum>=500)
    {
        (*fiveHundreds) ++;
        sum -= 500;
    }
    while (sum >=100){
        (*hundreds)++;
        sum -=100;
    }
    while (sum>=50){
        (*fifties)++;
        sum -=50;
    } 
     while (sum>=20){
        (*twenties)++;
        sum -=20;
    }    
     while (sum>=10){
        (*tens)++;
        sum -=10;
    }     
     while (sum>=5){
        (*fives)++;
        sum -=5;
    }      
     while (sum>=2){
        (*twos)++;
        sum -=2;
    }    
     while (sum>=1){
        (*ones)++;
        sum -=1;
    }    

}

int main(){
    int sum;
    int thousand=0, fiveHundred=0, hundred=0, fifty=0, twenty=0,ten=0,five=0,two=0, one=0;
    printf("Enter a number:-");
    scanf("%d",&sum);
    findDenomation(sum,&thousand,&fiveHundred,&hundred,&fifty,&twenty,&ten,&five,&two,&one);
    
    printf("Number of notes required are:-\n");
    printf("1000 x %d\n",thousand);
    printf("500  x %d\n",fiveHundred);
    printf("100  x %d\n",hundred);
    printf("50   x %d\n",fifty);
    printf("20   x %d\n",twenty);
    printf("10   x %d\n",ten);
    printf("5    x %d\n",five);
    printf("2    x %d\n",two);
    printf("1    x %d\n",one);


    return 0;
}