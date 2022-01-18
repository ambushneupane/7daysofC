#include <stdio.h>
int main(){
    struct test
    {
        int a,b,c;
    };
    
    struct test t1={
        .b=5,.c=2,.a=1
    };
    printf("%d\n",t1.a);
    printf("%d\n",t1.b);
    printf("%d\n",t1.c);
    return 0;
}