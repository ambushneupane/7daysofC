// Pointers and 2-D Arrays
#include <stdio.h>

// int main(){
//     int c[3][3]={6,2,0,1,5,9,2,4,6};
//     int *ptr;
//     // ptr= c; // Wrongggg

//     // ptr= c[0][0]; // Wrongg

//     // ptr= &c[0][0]; /// Works Fine
    
//     ptr= c[0]; // Works Fine

//     return 0;
// }


// int main(){

//     int *p;
//     int (*ptr)[5];
//     int myArr[5];

//     p=myArr;
//     ptr= &myArr; 

//     printf("Address of p is %u\n",p);
//     printf("Address of ptr is %u\n",ptr);

//     p++;
//     ptr++;

//     printf("After INcrementing \n ");
//     printf("Address of p is %u\n",p);
//     printf("Address of ptr is %u\n",ptr);




//     return 0;
// }

#include<stdio.h>
 
int main()
{
    int arr[] = { 3, 5, 6, 7, 9 };
    int *p = arr;
    int (*ptr)[5] = &arr;
     
    printf("p = %p, ptr = %p\n", p, ptr);
    printf("*p = %d, *ptr = %p\n", *p, *ptr);
     
    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",
                          sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",
                        sizeof(ptr), sizeof(*ptr));
    return 0;
}