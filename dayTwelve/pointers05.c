// More on Pointer to Pointer 
#include <stdio.h>

void addOne(int* ptr){
    (*ptr)++;


}


int main(){

    int num=1;
    int *p;
    p= &num;

    printf("Value of *p before the function call is %d\n",*p);
    addOne(p);
    printf("Value of *p after the function call is %d\n",*p);

    return 0;

}