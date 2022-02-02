#include <stdio.h>

int main(){

    int twoDarray[2][3]={
        {4,17,18},
        {3,7,12}
    };

    for (int i=0;i<2;i++){
        printf("Address of %dth array is %u\n",i,*(twoDarray+i));
        for(int j=0;j<3;j++){
            printf("\nAddress of twoDarray[%d][%d] is %u\n",i,j,*(twoDarray+i)+j);


            printf("\nValue of twoDarray[%d][%d] is %d\n",i,j,*(*(twoDarray+i)+j));
        }
    }







    return 0;
}