// Character arrays and pointers. 
#include <stdio.h>

void print(char* c){

    int i=0;
    // while (c[i]!='\0')   
    // {
    //     printf("%c",c[i]);
    //     i++;

   // }

    while (*c!='\0'){
        printf("%c",*c);
        c++;
    }



    printf("\n");
    

}

int main(){

    char character[20]="Hello World";
    print(character);

    return 0;
}