#include <stdio.h>
int main() {

  int x[5] = {1, 2, 3, 4, 5};
  int* ptr;

  // ptr is assigned the address of the third element
  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);   // 3
  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
  printf("*(ptr-1) = %d", *(ptr-1));  // 2

  return 0;
}

// #include <stdio.h>
// int main(){
//     int x[6]={0,15,21,35,44,22};
//     printf("X :- %d\n",*(x+(1)+1)+2+8);
//     return 0;
// }