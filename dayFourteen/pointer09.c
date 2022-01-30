// Passing array name as an argument to function

#include <stdio.h>

int randFunc(int array[]){  // int array[] is same as int *array
    for (int i=0; i<5;i++){
        printf("Value at %d is %d\n",i,array[i]);
    }
    array[0]=18; // Changes the original value of the array, why so? because arrays are passed as refrence in the function.... 
    return 0;
}

int main(){ 
    int arr[]={5,6,7,8,9};
    printf("The value at index 0 is %d\n",arr[0]);
    randFunc(arr);
     printf("The value at index 0 is %d\n",arr[0]);

    return 0;

}