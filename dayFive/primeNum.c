#include <stdio.h>
void checkPrime(int);

int main(){
    int num;
printf("Enter a number to check:-");
scanf("%d",&num);
checkPrime(num);

    return 0;
}


void checkPrime(int num){
    int composite=0;
    if (num==0 || num==1){
        printf("%d is neither prime Number nor composite.",num);

    }
    else {
        for (int i=3; i<= num/2; i++){
            
            if(num!=2||num%i==0){                
                composite=1;
                break;
                 }
                         
        }

        if (composite==1){
            printf("%d Is not Prime",num);
        }
        else printf("%d Is  Prime",num);

 
            
    }


}