#include <stdio.h>

int main()
{
    char string[50];
    printf("Enter string in lower case:-");
    fgets(string,sizeof(string),stdin);
    int letters[26]= {0};
    int count=0;

    for (int i=0;string[i]!='\0';i++){
        letters[string[i]-'a']++;
    };
    printf("Letters\tFrequency\n");
    for (int i=0;i<26;i++){
        if(letters[i]>0){
            printf(" %c \t  %d \n",'a'+i,letters[i]);
        };
    };
    
    


    
    return 0;
}