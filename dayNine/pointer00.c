/* 
    Poniters:- Special Variables that store the address of another variable


*/
#include <stdio.h>

// int main(){
//     int a;
//     int *p;
//     a=10;
//     p= &a;  // p stores the address of a. 
   
//         printf("Address of a is %d\n",&a);  // gives the address of a suppose 100
//         printf("address of variable stored in p (which in this case is address of a) is %d\n",p); // same as &a so gives 100
//         printf("address of p is  %d\n",&p); // gives the address of  p suppose 1011
//         printf("Value of address pointed by p (which in this case is value of a) %d\n",*p); // gives the (value) stored in address of a which here is 10
    
//         *p = 15; // Derefrencing --> Value of address being pointed by p(which in this case is 10) is now changed to 15
//         printf("Value of a now is:- %d\n",a);

      

//     return 0;
// }


int main(){
    int a=4;
    int *p;
    p=&a;
    printf("Address of p is %d\n",p); // Suppose returns 50000
    printf("Size of integer is :- %d\n",sizeof(int)); // Returns 4
    printf("Address of p+1 is:- %d\n",p+1); // Returns 50000+4= 50004


    printf("Value of p is %d\n",*p); 
    printf("Size of integer is :- %d bytes\n",sizeof(int)); // Returns 4
    printf("Value of p+1 is:- %d\n",*(p+1));



    return 0;
}