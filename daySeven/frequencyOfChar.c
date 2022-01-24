//C to find frequency of a user given string
#include <stdio.h>
#include <string.h>

int freq(){
    char string[50];
    int letters[255]= {0};
    int count=0;
    char ch;
    printf("Enter a string:-");
    fgets(string,sizeof(string),stdin);

    printf("Enter a character to find it's frequency:- ");
    scanf("%c",&ch);
  
    for (int i=0;i<strlen(string);i++){
       if(string[i]==ch){
           ++count;
       }
    }
    printf("Frequency of '%c' is ",ch);
    return count;
        
}

int main(){
    printf("%d",freq());

    return 0;
}