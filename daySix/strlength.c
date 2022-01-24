#include <stdio.h>

int strleng(){
    char string[50];
    int count=0,i=0;
    printf("Enter a string:-");
    gets(string); //dangerous to use as it may cause Buffer Overflow
    while (string[i]!= '\0'){
        count ++;
        i++;
    }
    return count;
}

int main(){
    printf("length of string is %d",strleng());
}