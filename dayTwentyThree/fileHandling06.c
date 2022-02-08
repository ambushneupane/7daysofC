#include <stdio.h>
int main(){
    FILE *filePtr=fopen("test.txt","r");
    int numOfNewLines=0;
    
    if(filePtr== NULL){
        printf("Sorry File couldn't Open!!!");
        return -1;
    }
    char text[150];
    
    while (fgets(text,sizeof(text),filePtr)!=NULL){
            numOfNewLines+=1;
    
             printf("%s",text);
    }
    printf("\n Number of new lines are %d",numOfNewLines-1);




    return 0; 
}