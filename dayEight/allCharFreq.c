#include <stdio.h>
#include <string.h>

int main(){
    char character[255]={0};
    char text[50];
    int count=0,max=-1;
    char maxChar;
    printf("Enter a string to check frequency of characters:-");
    fgets(text,sizeof(text),stdin);

    for(int i=0;i<text[i]!= '\0';i++){
        character[text[i]]++;
    }

    for (int i=0;i<256;i++){
        if(character[i]!=0){
            printf("Character '%c' occurs %d Times \n",i,character[i]);
            
        }
    }
    for (int i=0;i<strlen(text);i++){
        if(max<character[text[i]]){
            max=character[text[i]];
            maxChar= text[i];
        }
    }
    printf("\nMaximum Occuring Character is %c which occurs %d times",maxChar,max);

    return 0;
}