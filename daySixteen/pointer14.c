// More on Strings and pointers

#include <stdio.h>

void print(char *c){
    c[0]='A'; // possible only when c[20]= "Hello World"
    while (*c!=0){
        printf("%c",*c);
        c++;
    }
    printf("\n");
}

int main(){
    char c[20]="Hello World"; // string gets stored in the space for array
    // char *c= "Hello World"; // string gets stored as complie time constant. SO it can't be modified

    print(c);
    return  0;
}