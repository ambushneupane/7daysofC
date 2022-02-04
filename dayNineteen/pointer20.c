// Program Swaps the largest element with the central element of the array.
#include <stdio.h>

void swap(int *, int *);
int *mid(int arr[], int);
int *largest(int arr[],int);

int main(){

    int array[]={44,9,5,11,12,41};
    printf("Before Swapping: ");
    
    for (int i=0;i<(int)sizeof(array)/sizeof(array[0]);i++){
        printf("%d ",array[i]);
    }


    int *maxPtr , *midPtr;
    maxPtr = largest(array,(int)sizeof(array)/ sizeof(array[0]));
    midPtr= mid(array, (int)sizeof(array)/sizeof(array[0]));

    swap(maxPtr,midPtr);

    printf("\nAfter Swapping: ");
    
    for (int i=0;i<(int)sizeof(array)/sizeof(array[0]);i++){
        printf("%d ",array[i]);
    }

}

void swap (int *a, int *b){

    int temp= *a;
    *a= *b;
    *b= temp;
}

int *mid(int arr[], int size){
    int midPos= size / 2;
    return &arr[midPos];  
}

int *largest(int arr[], int size){
    int *max = &arr[0];
    for(int i=0; i<size; i++){
        if (*max < arr[i]){
            max= &arr[i];
        }
        
    }
        return max;
}