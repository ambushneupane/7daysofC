// Works as intended. 
#include <stdio.h>
int SOE(int *a,int size){ // a here is local variable of SOE but we can access the values of array[] (of main function) as arrays are passed as refrence parameters.
    int sum =0;
    for (int i=0;i<size;i++){
        sum+= a[i];
    }
    return sum;
}


int main(){
    int array[]={5,4,6,8};
    int size= sizeof(array)/sizeof(array[0]);
    int total= SOE(array,size);
    printf("Total:- %d",total);
    return 0;
}