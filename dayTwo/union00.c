//Union is a user defined data type which share the same memory location.
// Size of union will be the size of its largest element.
#include <stdio.h>

union abc{
    int a;
    float d;
   char b[20];

};

int main(){
printf("%ld",sizeof(union abc));

return 0;
}