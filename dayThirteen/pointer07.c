// Pointers And Arrays

#include <stdio.h>

int main(){
    
    int array[]={2,4,6,8,10};
    // printf("%d\n",array);// Gives the address of first element of array
    // printf("%d\n",&array[0]); // Same as array
    // printf("%d\n",array[0]); // value of first element

    // printf("%d\n",*array); //value of first element

    // for( int i=0;i<5;i++){
    //     printf("Address = %d\n",&array[i]);
    //     printf("Address =%d\n",array+i); // both gives the same result 
    // }


    for( int i=0;i<5;i++){
        printf("Value = %d\n",array[i]);
        printf("Value = %d\n",*(array+i)); // both gives the same result 
    }
 

  
    
     

    return 0;

}