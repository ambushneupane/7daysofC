// Pointer and Multi-Dimensional arrays concept

#include <stdio.h>

int main(){

    int C[3][2][2]={
        {{2,5},{8,6}},
        {{1,9},{4,18}},
        {{0,12},{7,11}}
    };

    printf("C is %d\n",C);//Suppose returns :-0
     printf("C+1 is %d\n",C+1); //==>16
    printf("*C+1 is %d\n",*C+1); //==>8
    printf("**C+1 is %d",**C+1);//==>4


    printf("C is %d\n",C);
    printf("*C is %d\n",*C);
    printf("C[0] is %d\n",C[0]);
    printf("&C[0][0] is %d\n",&C[0][0]);


    
    return 0;


}