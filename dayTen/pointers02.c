#include <stdio.h>
int main(){


    int x=6;
    int *p =&x; // address of x is stored in pointer p  

    int** q= &p; // address of pointer p is stored in pointer q 

    int ***r= &q; // address of pointer q is stored in pointer r 
    
                                            /* Suppose 

                    <-----Memory address ---->
       | 100| 101| 103-109   | 116| 119| 150| 156 | 195|  200 ....
       | ---|----|-|--|--|-- |----|----|----|-----|----|--------
Values | 195|    | |  |  |   |  6 |    | 100|     |116 |
       | ---|----|-|--|--|-- |----|----|----|-----|----|---------
int    |**q                     x       ***r         *p
    
                                                
                                                
                                                 */




     // *p means value at (address stored in p)
     // *r means value at (address stored in r)
     // *q means value at (address stored in q)
    
  
  
  
    printf("Value of *p is:- %d\n",*p); // returns 6 
    printf("Value of *q is :- %d\n",*q); // returns 116
    printf("Value of *(*q) is:- %d, which is equal to *p\n",*(*q)); // *(*q)==> *(116) ==> 6 . so returs 6
    printf("Value of *r is:- %d\n",*r); // returns value at address stored in r. so returns 195
    printf("Value of *(*r) is:- %d,which is equal to *q\n",*(*r)); // *(*r) ==> *(195) ==> 116
    printf("Value of *(*(*r)) is:- %d,which is equal to *p,*(*q)\n ",*(*(*r))); // *(*(*r)))  ==> 6.

                                                   
    return 0;
}