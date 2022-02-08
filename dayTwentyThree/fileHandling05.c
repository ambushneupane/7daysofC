// gives the total number of new line from a specified file


#include <stdio.h>

int main(){
    
    FILE *filePtr=fopen("test.txt","r");
    
    int countNewLine=0;


    if(filePtr== NULL){
        printf("Sorry File couldn't Open!!!");
        return -1;
    }

    for(char c= getc(filePtr);c!=EOF;c=getc(filePtr)){
        if(c == '\n'){
            countNewLine +=1;

        }
        
    }
    printf("Lines in the files are %d",countNewLine);
    
    
    
    fclose(filePtr);



    return 0;
}