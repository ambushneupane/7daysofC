#include <stdio.h>


int *max(int *a,int *b){ // we want pointer in the return value so int *max instead of int max
    *b= 0;    // changes the value from 15 to 0. CALL BY REFRENCE...
    if(*a > *b){
        return a;

    }
    else{
        return b;
    }


}
int main(){

    int m=4, n=15;
    int *p;

    p=max(&m,&n);

    printf("Max value is %d \n",*p); 

    printf("Value of n is %d\n",n);




    return 0;
}