#include <stdio.h>

void swap( int *a, int *b){
    int temp = *a;
    *a= *b;
    *b=temp;
}

int main(){
    int m=10, n=20;
    printf("Before Swapping:-m=%d,n=%d\n",m,n);

    swap(&m,&n);

    printf("After Swapping:-m=%d,n=%d\n",m,n);

    return 0;


}