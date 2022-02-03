#include <stdio.h>

void maxAndMin(int *,int ,int *,int *);

int main(){
    int array[]={16,12,15,99,25,0};
    int size = sizeof(array)/sizeof(array[0]);
    int max, min;

    maxAndMin(array,size,&max,&min);

    printf("Max= %d, Min= %d\n",max,min);

    return 0;
}

void maxAndMin(int *arr,int size,int*Max,int*Min)
{
    *Max= arr[0];
    *Min = arr[0];
    
    for (int i=0;i<size;i++){
        if (arr[i]>*Max){
            *Max= arr[i];
        }

        if (arr[i] < *Min){
            *Min = arr[i];
        }


    }


}