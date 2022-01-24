//Program to reverse a user given string.
#include <stdio.h>
#include <string.h>

void revstr();

int main()
{   
    revstr();
    return 0;
}

void revstr(){
    int len;
    char ch;
    char string[50];
    printf("Enter string you want to reverse:-");
    // gets(string) /* Gets the job done but never use this, No Never never ever use gets... man gets for more info 
    fgets(string,sizeof(string),stdin);
    len= strlen(string);
    for (int i=0; i<len/2;i++){
        ch=string[i];
        string[i]=string[len-i-1];
        string[len-i-1]= ch;
        }
    printf("%s",string);
}
