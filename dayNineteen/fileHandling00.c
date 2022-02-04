// File Handling

#include <stdio.h>

int main(){
    FILE *filePointer;
    filePointer=fopen("file.txt","r");

    if (filePointer== NULL){
        printf("Cannot Open the file ");
        return -1;
    }


    printf("File Opened SuccessFully");
    
    if(filePointer!=NULL){
        fclose(filePointer);
    }



    return 0;
}