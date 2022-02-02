#include<stdio.h>

int main()
{
    int arr[5]={10, 20, 30, 40, 50};
    int (*ptr)[5];    //pointer to an array of 5 integers

    ptr = &arr;      //ptr references the whole array

    printf("Address of the array when arr = %p\n",arr);
    printf("Address of the array when &arr = %p\n",&arr);


    printf("Address of the array when arr+1 = %p\n",arr+1);
    printf("Address of the array when &arr+1 = %p\n",&arr+1);

    printf("Address of the first element in the array = %p\n", *ptr);
    printf("Value of the first element = %d\n",**ptr);

    return 0;
}