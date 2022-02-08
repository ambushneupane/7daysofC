#include <stdio.h>
int swap(int *a,int *b){
    *a= *a+*b;
    *b= *a-*b;
    *a= *a-*b;
    printf("a is %d b is %d",*a,*b);
}
int main(){ 

    int a=2, b=3;
    swap(&a,&b);

    
    return 0;
}