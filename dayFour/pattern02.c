// Program to print the half pyramid of Characters. 
#include <stdio.h>
int main(){
    char alphabet='A',input='E';
    printf("Enter Character in uppercase you want to get in the last row:-\n");
    // scanf("%c",&input);
 

    for (int i=0;i<=(input-'A'); i++){
    
        for (int j=0; j<=i; j++){
            printf("%c ",alphabet);
        }
        printf("\n");
        alphabet+=1;

    }
}