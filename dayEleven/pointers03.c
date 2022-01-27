// Function Pointers 


// Pass by value 
// #include <stdio.h>

// void square(int var){
//     printf("the square is %d\n",var*var);
//     var= 6; // Just changes the value of var inside of square and doesn't effect the value inside the main --- This is because By default variables are passed by value 
// }
// int main(){
//     int var = 5;
//     square(var);
//     printf("The value of var is %d\n",var); // returns 5

//     return 0;
// }

/* Pass by refrence:- In this we don't pass the value of parameter insted we pass the address of the variable  */

#include <stdio.h>

void square(int *x)
{
    printf("The square is %d\n", (*x) * (*x));
    *x =5; // This affects the value of var inside the main function.
}

int main(){

    int var =3;
    square(&var);
    printf("The value of var is %d\n",var);  // returns 5 
    return 0;
}